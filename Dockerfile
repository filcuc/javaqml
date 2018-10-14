FROM ubuntu:16.04

RUN apt-get update -y
RUN apt-get install -y build-essential cmake software-properties-common
RUN add-apt-repository -y ppa:webupd8team/java
RUN apt-get update -y
RUN echo "oracle-java8-installer shared/accepted-oracle-license-v1-1 select true" | debconf-set-selections
RUN apt-get install -y oracle-java8-installer
RUN apt-get install -y git
RUN apt-get install -y qt5-default
RUN apt-get install -y qtdeclarative5-dev qml-module-qtquick-controls
RUN cd /tmp && git clone https://github.com/filcuc/DOtherSide.git && cd DOtherSide && mkdir build && cd build && cmake .. -DCMAKE_INSTALL_PREFIX=/usr/ && make && make install 