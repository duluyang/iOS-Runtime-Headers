/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAcceptSharesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray *_shareURLsToAccept;
}

@property (nonatomic, retain) NSArray *shareURLsToAccept;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShareURLsToAccept:(id)arg1;
- (id)shareURLsToAccept;

@end
