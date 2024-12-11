#import "L12AppSettingsController.h"
#import <Preferences/PSTableCell.h>
#include <spawn.h>
#import "OrderedDictionary.h"

@interface PSListController (Method)
-(BOOL)containsSpecifier:(id)arg1;
@end

@interface L12RootListController : PSListController
@property (nonatomic, retain) UIBarButtonItem *respringButton;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) NSMutableDictionary *savedSpecifiers;
@property (nonatomic, retain) UIView *headerView;
-(OrderedDictionary*)trimDataSource:(OrderedDictionary*)dataSource;
-(NSMutableArray*)appSpecifiers;
- (void)respring:(id)sender;
@end

@interface OBButtonTray : UIView
@property (nonatomic,retain) UIVisualEffectView * effectView;
- (void)addButton:(id)arg1;
- (void)addCaptionText:(id)arg1;
@end

@interface OBBoldTrayButton : UIButton
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
+(id)buttonWithType:(long long)arg1;
@end

@interface OBWelcomeController : UIViewController
@property (nonatomic,retain) UIView * viewIfLoaded;
@property (nonatomic,strong) UIColor * backgroundColor;
- (OBButtonTray *)buttonTray;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (void)addBulletedListItemWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3;
@end


@interface L12TwitterCell : PSTableCell
@property (nonatomic, retain, readonly) UIView *avatarView;
@property (nonatomic, retain, readonly) UIImageView *avatarImageView;
@end

@interface L12TwitterCell () {
    NSString *_user;
}
@end


@interface UIImage (Private)
+ (UIImage*)kitImageNamed:(NSString*)name;
@end

@interface UIColor (libappearancecell)
+ (UIColor *)colorFromHexString:(NSString *)hexString;
@end


@interface L12AppearanceSelectionTableCell : PSTableCell
@property(nonatomic, retain) UIStackView *containerStackView;
@property(nonatomic, retain) NSArray *options;

- (void)updateForType:(int)type;
@end

@interface L12AppearanceTypeStackView : UIStackView
@property(nonatomic, retain) L12AppearanceSelectionTableCell *hostController;

@property(nonatomic, retain) UIImageView *iconView;
@property(nonatomic, retain) UILabel *captionLabel;
@property(nonatomic, retain) UIButton *checkmarkButton;

@property(nonatomic, retain) UIImpactFeedbackGenerator *feedbackGenerator;
@property(nonatomic, retain) UILongPressGestureRecognizer *tapGestureRecognizer;

@property(nonatomic, assign) int type;
@property(nonatomic, retain) NSString *defaultsIdentifier;
@property(nonatomic, retain) NSString *postNotification;
@property(nonatomic, retain) NSString *key;
@property(nonatomic, retain) NSString *tintColor;

- (L12AppearanceTypeStackView *)initWithType:(int)type forController:(L12AppearanceSelectionTableCell *)controller withImage:(UIImage *)image andText:(NSString *)text andSpecifier:(PSSpecifier *)specifier;
- (void)buttonTapped:(UILongPressGestureRecognizer *)sender;
@end
