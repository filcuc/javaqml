public class QUrl {
    public QUrl(String url, int parsingMode) {
        this.self = DOtherSideJNI.qurl_create(url, parsingMode);
    }

    public boolean isValid() {
	return DOtherSideJNI.qurl_isValid(self);
    }

    public void delete() {
	DOtherSideJNI.qurl_delete(self);
    }

    @Override
    public String toString() {
	return DOtherSideJNI.qurl_toString(self);
    }

    public long voidPointer() {
	return self;
    }

    @Override
    public void finalize() {
        delete();
    }

    private long self;
}
