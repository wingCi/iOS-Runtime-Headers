/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFMGGetMobileGestaltBoolRequest : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *key;

+ (id)getMobileGestaltBoolRequest;
+ (id)getMobileGestaltBoolRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)key;
- (BOOL)requiresResponse;
- (void)setKey:(id)arg1;

@end
