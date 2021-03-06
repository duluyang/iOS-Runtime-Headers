/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIReusableObject : NSObject {
    BOOL _isPreparedForReuse;
    BOOL _isPreparedFromStatement;
    BOOL _isPreparingFromStatement;
}

@property (nonatomic, readonly) BOOL isPreparedFromStatement;

- (void)didPrepareFromStatement:(struct sqlite3_stmt { }*)arg1;
- (id)init;
- (BOOL)isPreparedFromStatement;
- (void)prepareForReuse;
- (void)prepareFromStatement:(struct sqlite3_stmt { }*)arg1;

@end
