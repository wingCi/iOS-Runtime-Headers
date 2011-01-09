/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSMutableArray;



@interface IMDirectlyObservableObject : NSObject 
{
    NSMutableArray *_observers;
}


- (void)_objectDidPostNotification:(id)arg1;
- (id)observers;
- (void)informObserversOfNotification:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;

@end