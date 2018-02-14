#import "RCT3DModelIO.h"
#import "RCT3DModelView.h"
#import <React/RCTView.h>
#import <SceneKit/SceneKit.h>
#import <React/RCTConvert.h>

@interface RCT3DScnModelView : RCT3DModelView<SCNSceneRendererDelegate>
    @property (nonatomic) float lastSceneTime;
    @property (nonatomic) float sceneTime;
@end
