/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailboxPrediction.framework/MailboxPrediction
 */

@interface MPSmoothingParameters : NSObject <MPMessageModeling, NSSecureCoding> {
    NSDictionary * _smoothingParameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSDictionary *smoothingParameters;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)addMessage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatures:(id)arg1;
- (unsigned int)parameterForFeatureKey:(id)arg1;
- (BOOL)removeMessage:(id)arg1;
- (void)setSmoothingParameters:(id)arg1;
- (id)smoothingParameters;
- (BOOL)updateWithFeature:(id)arg1 key:(id)arg2 adding:(BOOL)arg3;
- (BOOL)updateWithMessage:(id)arg1 byAdding:(BOOL)arg2;

@end
