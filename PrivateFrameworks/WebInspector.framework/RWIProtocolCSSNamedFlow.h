/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSNamedFlow : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *content;
@property (nonatomic) int documentNodeId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) BOOL overset;
@property (nonatomic, copy) NSArray *regions;

- (id)content;
- (int)documentNodeId;
- (id)initWithDocumentNodeId:(int)arg1 name:(id)arg2 overset:(BOOL)arg3 content:(id)arg4 regions:(id)arg5;
- (id)name;
- (BOOL)overset;
- (id)regions;
- (void)setContent:(id)arg1;
- (void)setDocumentNodeId:(int)arg1;
- (void)setName:(id)arg1;
- (void)setOverset:(BOOL)arg1;
- (void)setRegions:(id)arg1;

@end
