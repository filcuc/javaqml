FROM ubuntu:16.04

RUN \
apt-get update -y && \
apt-get install -y build-essential software-properties-common && \
add-apt-repository -y ppa:webupd8team/java && \
apt-get update -y && \
echo "oracle-java8-installer shared/accepted-oracle-license-v1-1 select true" | debconf-set-selections && \
apt-get install -y oracle-java8-installer git qt5-default qtdeclarative5-dev qml-module-qtquick-controls && \
wget https://cmake.org/files/v3.12/cmake-3.12.0-Linux-x86_64.sh && \
chmod +x cmake-3.12.0-Linux-x86_64.sh && \
./cmake-3.12.0-Linux-x86_64.sh --prefix=/usr --exclude-subdir && \
cd /tmp && \
git clone https://github.com/filcuc/DOtherSide.git && \
cd DOtherSide && \
mkdir build && \
cd build && \
cmake .. -DCMAKE_INSTALL_PREFIX=/usr/ && \
make && \
make install 