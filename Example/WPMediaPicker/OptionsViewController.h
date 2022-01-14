@import UIKit;

extern NSString const *MediaPickerOptionsShowMostRecentFirst;
extern NSString const *MediaPickerOptionsShowCameraCapture;
extern NSString const *MediaPickerOptionsPreferFrontCamera;
extern NSString const *MediaPickerOptionsAllowMultipleSelection;
extern NSString const *MediaPickerOptionsPostProcessingStep;
extern NSString const *MediaPickerOptionsFilterType;
extern NSString const *MediaPickerOptionsCustomPreview;
extern NSString const *MediaPickerOptionsScrollInputPickerVertically;
extern NSString const *MediaPickerOptionsShowSampleCellOverlays;
extern NSString const *MediaPickerOptionsShowSearchBar;
extern NSString const *MediaPickerOptionsShowActionBar;
/// Note that a custom header cannot be displayed at the same time as the in-picker camera capture cell.
/// If both are specified, the custom header will take precedence.
extern NSString const *MediaPickerOptionsShowCustomHeader;

@class OptionsViewController;

@protocol OptionsViewControllerDelegate <NSObject>

- (void)optionsViewController:(OptionsViewController *)optionsViewController changed:(NSDictionary *)options;

- (void)cancelOptionsViewController:(OptionsViewController *)optionsViewController;

@end
@interface OptionsViewController : UITableViewController

@property (nonatomic, weak) id<OptionsViewControllerDelegate> delegate;
@property (nonatomic, copy) NSDictionary *options;

@end
