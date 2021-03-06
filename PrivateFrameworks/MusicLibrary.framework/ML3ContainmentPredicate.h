/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ContainmentPredicate : ML3PropertyPredicate {
    NSSet *_values;
}

@property (nonatomic, retain) NSSet *values;

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2;

- (void).cxx_destruct;
- (id)_orderedValues;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;
- (id)databaseStatementParameters;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1 values:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)setValues:(id)arg1;
- (id)values;

@end
