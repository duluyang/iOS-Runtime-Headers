/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface ASAssetQuery : NSObject {
    NSString *_assetType;
    double _networkTimeout;
    NSPredicate *_predicate;
    BOOL _queriesLocalAssetInformationOnly;
    NSArray *_results;
}

@property (nonatomic, copy) NSString *assetType;
@property (nonatomic) double networkTimeout;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic) BOOL queriesLocalAssetInformationOnly;
@property (nonatomic, retain) NSArray *results;

+ (id)queryPredicateForProperties:(id)arg1;

- (id)assetType;
- (void)dealloc;
- (id)initWithAssetType:(id)arg1;
- (double)networkTimeout;
- (id)predicate;
- (BOOL)queriesLocalAssetInformationOnly;
- (id)results;
- (id)runQueryAndReturnError:(id*)arg1;
- (void)setAssetType:(id)arg1;
- (void)setNetworkTimeout:(double)arg1;
- (void)setPredicate:(id)arg1;
- (void)setQueriesLocalAssetInformationOnly:(BOOL)arg1;
- (void)setResults:(id)arg1;
- (void)startQuery:(id /* block */)arg1;
- (void)stopQuery;

@end
