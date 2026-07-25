/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025F148
 * Mangled: _ZN5Caver23CharControllerComponent6PickupEPNS_11SceneObjectEb
 * Demangled: Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *
 * Callers: 1
 *   0x0000000000201900  Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *
 * Callees: 17
 *   0x00000000001F3810  Caver::CharControllerComponent::SetInitialAnimationControllerState(void)
 *   0x00000000001F6190  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FB5D0  Caver::SwingableWeaponControllerComponent::SetWeaponHidden(bool)
 *   0x00000000001FC550  Caver::Skeleton::BoneIndexForName(std::string const&)
 *   0x00000000001FCCA0  Caver::CharAnimControllerComponent::BlendFromAnimationNode(boost::intrusive_ptr<Caver::AnimKeysNode> const&,float)
 *   0x00000000001FDFE0  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *   0x00000000001FE5E0  Caver::SceneObject::HandleMessage(int,void *)
 *   0x00000000001FEEE0  Caver::CharControllerComponent::PickupWithoutAnimation(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *   0x000000000025FEF8  Caver::CharControllerComponent::TargetPickupObjectPosition(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 448
 *   insn=0x000000000025F15C string=0x000000000025F160 "U"
 *   insn=0x000000000025F170 string=0x000000000025F174 "h"
 *   insn=0x000000000025F178 string=0x000000000025F17C ""
 *   insn=0x000000000025F180 string=0x000000000025F184 "(!"
 *   insn=0x000000000025F184 string=0x000000000025F188 "I"
 *   insn=0x000000000025F18C string=0x000000000025F190 "`"
 *   insn=0x000000000025F19C string=0x000000000025F1A0 "!8"
 *   insn=0x000000000025F1BC string=0x000000000025F1FC "h"
 *   insn=0x000000000025F1C0 string=0x000000000025F1C4 "h"
 *   insn=0x000000000025F1C4 string=0x000000000025F1C8 "(@"
 *   insn=0x000000000025F1C8 string=0x000000000025F1CC ""
 *   insn=0x000000000025F1CC string=0x000000000025F1D0 "("
 *   insn=0x000000000025F1D0 string=0x000000000025F1D4 "`NA"
 *   insn=0x000000000025F1D4 string=0x000000000025F1D8 "aN"
 *   insn=0x000000000025F1DC string=0x000000000025F1E0 "@"
 *   insn=0x000000000025F1E0 string=0x000000000025F1E4 ""
 *   insn=0x000000000025F1E4 string=0x000000000025F1E8 ""
 *   insn=0x000000000025F1EC string=0x000000000025F1F0 ""
 *   insn=0x000000000025F1F0 string=0x000000000025F1F4 ""
 *   insn=0x000000000025F200 string=0x000000000025F204 "hN@"
 *   insn=0x000000000025F204 string=0x000000000025F208 "h"
 *   insn=0x000000000025F208 string=0x000000000025F20C "vB"
 *   insn=0x000000000025F208 string=0x000000000025F234 "`""
 *   insn=0x000000000025F210 string=0x000000000025F24C "\t\t@"
 *   insn=0x000000000025F214 string=0x000000000025F218 "2"
 *   insn=0x000000000025F218 string=0x000000000025F21C "h"
 *   insn=0x000000000025F220 string=0x000000000025F224 "hZ@"
 *   insn=0x000000000025F228 string=0x000000000025F22C "vB"
 *   insn=0x000000000025F228 string=0x000000000025F4C0 "`"
 *   insn=0x000000000025F230 string=0x000000000025F4D8 "\t\t@"
 *   insn=0x000000000025F238 string=0x000000000025F23C ")b"
 *   insn=0x000000000025F23C string=0x000000000025F240 "hN@"
 *   insn=0x000000000025F23C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025F240 string=0x000000000025F244 "vB"
 *   insn=0x000000000025F24C string=0x000000000025F250 ")"
 *   insn=0x000000000025F250 string=0x000000000025F254 "\t\t"
 *   insn=0x000000000025F260 string=0x000000000025F264 "@"
 *   insn=0x000000000025F264 string=0x000000000025F268 ""
 *   insn=0x000000000025F268 string=0x000000000025F26C ""
 *   insn=0x000000000025F270 string=0x000000000025F274 ""
 *   insn=0x000000000025F274 string=0x000000000025F278 ""
 *   insn=0x000000000025F280 string=0x000000000025F284 "cQ"
 *   insn=0x000000000025F284 string=0x00000000001F3810 "P'"
 *   insn=0x000000000025F288 string=0x000000000025F28C "h2B"
 *   insn=0x000000000025F288 string=0x000000000025F404 "h"
 *   insn=0x000000000025F28C string=0x000000000025F290 "h"
 *   insn=0x000000000025F290 string=0x000000000025F294 "h.B"
 *   insn=0x000000000025F290 string=0x000000000025F2DC "`~@"
 *   insn=0x000000000025F294 string=0x000000000025F298 "("
 *   insn=0x000000000025F298 string=0x000000000025F29C "hB@"
 *   insn=0x000000000025F2A0 string=0x000000000025F2A4 "`"
 *   insn=0x000000000025F2A0 string=0x000000000025F2B4 ")"
 *   insn=0x000000000025F2A8 string=0x000000000025F2AC "b"
 *   insn=0x000000000025F2AC string=0x000000000025F2B0 "hB@"
 *   insn=0x000000000025F2B8 string=0x000000000025F2BC "!5D"
 *   insn=0x000000000025F2C8 string=0x000000000025F2CC "  "
 *   insn=0x000000000025F2CC string=0x000000000025F2D0 "m"
 *   insn=0x000000000025F2D0 string=0x000000000025F2D4 "AB9"
 *   insn=0x000000000025F2D8 string=0x000000000025F6E8 "`r@"
 *   insn=0x000000000025F2E0 string=0x000000000025F2E4 "`"
 *   insn=0x000000000025F2E0 string=0x000000000025F2F8 ""
 *   insn=0x000000000025F2EC string=0x000000000025F2F0 "`~@"
 *   insn=0x000000000025F2F0 string=0x000000000025F2F4 "@"
 *   insn=0x000000000025F2F8 string=0x000000000025F2FC ""
 *   insn=0x000000000025F30C string=0x000000000025F310 "`~@"
 *   insn=0x000000000025F30C string=0x000000000025F460 "tN@"
 *   insn=0x000000000025F314 string=0x000000000025F318 "`"
 *   insn=0x000000000025F314 string=0x000000000025F328 ""
 *   insn=0x000000000025F320 string=0x000000000025F324 "`~@"
 *   insn=0x000000000025F328 string=0x000000000025F32C ""
 *   insn=0x000000000025F338 string=0x000000000025F33C "@"
 *   insn=0x000000000025F338 string=0x000000000025F348 "("
 *   insn=0x000000000025F33C string=0x000000000025F340 ""
 *   insn=0x000000000025F340 string=0x000000000025F344 ""
 *   insn=0x000000000025F348 string=0x0000000000583C38 "\n"
 *   insn=0x000000000025F354 string=0x000000000025F358 "Rv"
 *   insn=0x000000000025F358 string=0x00000000001FCCA0 "0'"
 *   insn=0x000000000025F360 string=0x000000000025F364 "@"
 *   insn=0x000000000025F360 string=0x000000000025F380 "`~@"
 *   insn=0x000000000025F364 string=0x000000000025F368 ""
 *   insn=0x000000000025F368 string=0x000000000025F36C ""
 *   insn=0x000000000025F370 string=0x000000000025F374 ""
 *   insn=0x000000000025F374 string=0x000000000025F378 ""
 *   insn=0x000000000025F384 string=0x000000000025F38C "hj"
 *   insn=0x000000000025F390 string=0x000000000025F394 "`"
 *   insn=0x000000000025F390 string=0x000000000025F3A4 ""
 *   insn=0x000000000025F39C string=0x000000000025F3A0 "`~@"
 *   insn=0x000000000025F3A4 string=0x000000000025F3A8 ""
 *   insn=0x000000000025F3AC string=0x000000000025F3B0 "("
 *   insn=0x000000000025F3B0 string=0x0000000000583944 "\n"
 *   insn=0x000000000025F3B8 string=0x000000000025F3BC "   "
 *   insn=0x000000000025F3BC string=0x000000000025F3C0 "d"
 *   insn=0x000000000025F3C0 string=0x000000000025F3C4 "`~@"
 *   insn=0x000000000025F3C0 string=0x000000000025F3EC "`"
 *   insn=0x000000000025F3C8 string=0x000000000025F3CC "`"
 *   insn=0x000000000025F3C8 string=0x000000000025F3DC ""
 *   insn=0x000000000025F3D4 string=0x000000000025F3D8 "`~@"
 *   insn=0x000000000025F3DC string=0x000000000025F3E0 ""
 *   insn=0x000000000025F3EC string=0x000000000025F3F0 "h"
 *   insn=0x000000000025F3FC string=0x000000000025F400 "e"
 *   insn=0x000000000025F404 string=0x000000000025F408 "h"
 *   insn=0x000000000025F408 string=0x000000000025F40C "`NA"
 *   insn=0x000000000025F40C string=0x000000000025F410 "!"
 *   insn=0x000000000025F414 string=0x000000000025F418 "r|"
 *   insn=0x000000000025F418 string=0x000000000025F41C "`"
 *   insn=0x000000000025F41C string=0x000000000025F420 "aNA"
 *   insn=0x000000000025F428 string=0x000000000025F42C "`NA"
 *   insn=0x000000000025F428 string=0x00000000001FDFE0 "0'"
 *   insn=0x000000000025F434 string=0x000000000025F438 "@"
 *   insn=0x000000000025F438 string=0x000000000025F43C ""
 *   insn=0x000000000025F43C string=0x000000000025F440 ""
 *   insn=0x000000000025F444 string=0x000000000025F448 ""
 *   insn=0x000000000025F448 string=0x000000000025F44C ""
 *   insn=0x000000000025F458 string=0x000000000025F45C "N"
 *   insn=0x000000000025F464 string=0x000000000025F468 "`""
 *   insn=0x000000000025F470 string=0x000000000025F474 "tN@"
 *   insn=0x000000000025F47C string=0x000000000025F480 ""
 *   insn=0x000000000025F490 string=0x000000000025F494 "@"
 *   insn=0x000000000025F494 string=0x000000000025F498 ""
 *   insn=0x000000000025F498 string=0x000000000025F49C ""
 *   insn=0x000000000025F4A0 string=0x000000000025F4A4 ""
 *   insn=0x000000000025F4A4 string=0x000000000025F4A8 ""
 *   insn=0x000000000025F4B0 string=0x000000000025F4B4 "`~@"
 *   insn=0x000000000025F4C8 string=0x000000000025F4CC "hZ@"
 *   insn=0x000000000025F4CC string=0x000000000025F4D0 "vB"
 *   insn=0x000000000025F4D8 string=0x000000000025F4DC ")"
 *   insn=0x000000000025F4DC string=0x000000000025F4E0 "\t\t"
 *   insn=0x000000000025F4EC string=0x000000000025F4F0 "@"
 *   insn=0x000000000025F4EC string=0x000000000025F50C "`"
 *   insn=0x000000000025F4F0 string=0x000000000025F4F4 ""
 *   insn=0x000000000025F4F4 string=0x000000000025F4F8 ""
 *   insn=0x000000000025F4FC string=0x000000000025F500 ""
 *   insn=0x000000000025F500 string=0x000000000025F504 ""
 *   insn=0x000000000025F510 string=0x000000000025F514 "h"9"
 *   insn=0x000000000025F518 string=0x000000000025F51C "`"
 *   insn=0x000000000025F520 string=0x000000000025F524 "oa"
 *   insn=0x000000000025F524 string=0x000000000025F528 "`"
 *   insn=0x000000000025F528 string=0x000000000025F52C "`"
 *   insn=0x000000000025F52C string=0x000000000025F538 "`"
 *   insn=0x000000000025F530 string=0x000000000025F534 "'p"
 *   insn=0x000000000025F534 string=0x00000000001FB5D0 "0'"
 *   insn=0x000000000025F53C string=0x000000000025F540 "`b"
 *   insn=0x000000000025F544 string=0x000000000025F548 "fa"
 *   insn=0x000000000025F548 string=0x000000000025F54C "`"
 *   insn=0x000000000025F54C string=0x000000000025F550 "`"
 *   insn=0x000000000025F564 string=0x000000000025F568 "`f@"
 *   insn=0x000000000025F564 string=0x000000000025F660 "H"
 *   insn=0x000000000025F56C string=0x000000000025F570 "`"
 *   insn=0x000000000025F56C string=0x000000000025F584 ""
 *   insn=0x000000000025F574 string=0x000000000025F578 "Za"
 *   insn=0x000000000025F578 string=0x000000000025F57C "`f@"
 *   insn=0x000000000025F584 string=0x000000000025F588 ""
 *   insn=0x000000000025F598 string=0x000000000025F59C "`f@"
 *   insn=0x000000000025F598 string=0x000000000025F688 "tN@"
 *   insn=0x000000000025F5A0 string=0x000000000025F5A4 "`"
 *   insn=0x000000000025F5A0 string=0x000000000025F5B4 ""
 *   insn=0x000000000025F5A8 string=0x000000000025F5AC "Ma"
 *   insn=0x000000000025F5AC string=0x000000000025F5B0 "`f@"
 *   insn=0x000000000025F5B4 string=0x000000000025F5B8 ""
 *   insn=0x000000000025F5C4 string=0x000000000025F5C8 "@"
 *   insn=0x000000000025F5C4 string=0x000000000025F5D4 "("
 *   insn=0x000000000025F5C8 string=0x000000000025F5CC ""
 *   insn=0x000000000025F5CC string=0x000000000025F5D0 ""
 *   insn=0x000000000025F5EC string=0x000000000025F5F0 "@"
 *   insn=0x000000000025F5EC string=0x000000000025F60C "hB@"
 *   insn=0x000000000025F5F0 string=0x000000000025F5F4 ""
 *   insn=0x000000000025F5F4 string=0x000000000025F5F8 ""
 *   insn=0x000000000025F5FC string=0x000000000025F600 ""
 *   insn=0x000000000025F600 string=0x000000000025F604 ""
 *   insn=0x000000000025F610 string=0x000000000025F614 "`"
 *   insn=0x000000000025F618 string=0x000000000025F61C "1a"
 *   insn=0x000000000025F61C string=0x000000000025F620 "hB@"
 *   insn=0x000000000025F624 string=0x000000000025F628 "\tQ"
 *   insn=0x000000000025F628 string=0x000000000025F62C "`f@"
 *   insn=0x000000000025F62C string=0x000000000025F630 "ij"
 *   insn=0x000000000025F634 string=0x000000000025F638 "`"
 *   insn=0x000000000025F634 string=0x000000000025F648 ""
 *   insn=0x000000000025F63C string=0x000000000025F640 "(a"
 *   insn=0x000000000025F640 string=0x000000000025F644 "`f@"
 *   insn=0x000000000025F648 string=0x000000000025F64C ""
 *   insn=0x000000000025F650 string=0x000000000025F654 "(@"
 *   insn=0x000000000025F654 string=0x000000000025F658 "h"
 *   insn=0x000000000025F65C string=0x000000000025F66C "\t"
 *   insn=0x000000000025F660 string=0x000000000025F668 "hj"
 *   insn=0x000000000025F66C string=0x000000000025F670 "h"
 *   insn=0x000000000025F670 string=0x000000000025F674 " "
 *   insn=0x000000000025F68C string=0x000000000025F690 "`""
 *   insn=0x000000000025F698 string=0x000000000025F69C "tN@"
 *   insn=0x000000000025F6A4 string=0x000000000025F6A8 ""
 *   insn=0x000000000025F6B4 string=0x000000000025F6B8 " "
 *   insn=0x000000000025F6B8 string=0x000000000025F6BC "@"
 *   insn=0x000000000025F6BC string=0x000000000025F6C0 ""
 *   insn=0x000000000025F6C0 string=0x000000000025F6C4 ""
 *   insn=0x000000000025F6C8 string=0x000000000025F6CC ""
 *   insn=0x000000000025F6CC string=0x000000000025F6D0 ""
 *   insn=0x000000000025F6D8 string=0x000000000025F6DC "`f@"
 *   insn=0x000000000025F6EC string=0x000000000025F6F0 "`B"
 *   insn=0x000000000025F6EC string=0x000000000025F704 ""
 *   insn=0x000000000025F6F8 string=0x000000000025F6FC "`r@"
 *   insn=0x000000000025F704 string=0x000000000025F708 ""
 *   insn=0x000000000025F714 string=0x000000000025F718 "t\t"
 *   insn=0x000000000025F718 string=0x000000000025F71C "`r@"
 *   insn=0x000000000025F718 string=0x000000000025F844 "tN@"
 *   insn=0x000000000025F720 string=0x000000000025F724 "`B"
 *   insn=0x000000000025F720 string=0x000000000025F734 ""
 *   insn=0x000000000025F72C string=0x000000000025F730 "`r@"
 *   insn=0x000000000025F734 string=0x000000000025F738 ""
 *   insn=0x000000000025F744 string=0x000000000025F748 "@"
 *   insn=0x000000000025F744 string=0x000000000025F754 "("
 *   insn=0x000000000025F748 string=0x000000000025F74C ""
 *   insn=0x000000000025F74C string=0x000000000025F750 ""
 *   insn=0x000000000025F760 string=0x000000000025F764 "Ou"
 *   insn=0x000000000025F76C string=0x000000000025F770 "@"
 *   insn=0x000000000025F76C string=0x000000000025F78C "`r@"
 *   insn=0x000000000025F770 string=0x000000000025F774 ""
 *   insn=0x000000000025F774 string=0x000000000025F778 ""
 *   insn=0x000000000025F77C string=0x000000000025F780 ""
 *   insn=0x000000000025F780 string=0x000000000025F784 ""
 *   insn=0x000000000025F78C string=0x000000000025F790 "h"
 *   insn=0x000000000025F790 string=0x000000000025F798 "hj"
 *   insn=0x000000000025F79C string=0x000000000025F7A0 "`B"
 *   insn=0x000000000025F79C string=0x000000000025F7B0 ""
 *   insn=0x000000000025F7A8 string=0x000000000025F7AC "`r@"
 *   insn=0x000000000025F7B0 string=0x000000000025F7B4 ""
 *   insn=0x000000000025F7B8 string=0x000000000025F7BC "H"
 *   insn=0x000000000025F7BC string=0x0000000000587998 "\n"
 *   insn=0x000000000025F7C0 string=0x000000000025F7C4 ""
 *   insn=0x000000000025F7C4 string=0x000000000025F7C8 "("
 *   insn=0x000000000025F7CC string=0x000000000025F7D0 "!(("
 *   insn=0x000000000025F7D0 string=0x000000000025F7D4 "   "
 *   insn=0x000000000025F7D8 string=0x000000000025F7DC "`r@"
 *   insn=0x000000000025F7D8 string=0x000000000025F808 "hB@"
 *   insn=0x000000000025F7E0 string=0x000000000025F7E4 "`B"
 *   insn=0x000000000025F7E0 string=0x000000000025F7F4 ""
 *   insn=0x000000000025F7EC string=0x000000000025F7F0 "`r@"
 *   insn=0x000000000025F7F4 string=0x000000000025F7F8 ""
 *   insn=0x000000000025F808 string=0x000000000025F80C "`"
 *   insn=0x000000000025F810 string=0x000000000025F814 "`"
 *   insn=0x000000000025F81C string=0x000000000025F820 "hB@"
 *   insn=0x000000000025F828 string=0x000000000025F82C "4"
 *   insn=0x000000000025F82C string=0x000000000025F830 "h"
 *   insn=0x000000000025F838 string=0x000000000025F83C "`"
 *   insn=0x000000000025F83C string=0x000000000025F840 "U"
 *   insn=0x000000000025F848 string=0x000000000025F84C "`""
 *   insn=0x000000000025F854 string=0x000000000025F858 "tN@"
 *   insn=0x000000000025F860 string=0x000000000025F864 ""
 *   insn=0x000000000025F870 string=0x000000000025F874 "@"
 *   insn=0x000000000025F874 string=0x000000000025F878 "@"
 *   insn=0x000000000025F878 string=0x000000000025F87C ""
 *   insn=0x000000000025F87C string=0x000000000025F880 ""
 *   insn=0x000000000025F884 string=0x000000000025F888 ""
 *   insn=0x000000000025F888 string=0x000000000025F88C ""
 *   insn=0x000000000025F894 string=0x000000000025F898 "`r@"
 *   insn=0x000000000025F8A4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000025F8AC string=0x000000000025F8B0 "("
 *   insn=0x000000000025F8B0 string=0x000000000025F8B4 "\t\t@"
 *   insn=0x000000000025F8B4 string=0x000000000025F8B8 ")"
 *   insn=0x000000000025F8B8 string=0x000000000025F8BC "\t\t"
 *   insn=0x000000000025F8C0 string=0x000000000025F8C4 "\t"
 *   insn=0x000000000025F8C4 string=0x000000000025F8C8 ")"
 *   insn=0x000000000025F8CC string=0x000000000025F8D0 " "
 *   insn=0x000000000025F8E0 string=0x000000000025F8E4 "\t\t@"
 *   insn=0x000000000025F8E4 string=0x000000000025F8E8 ")"
 *   insn=0x000000000025F8E8 string=0x000000000025F8EC "\t\t"
 *   insn=0x000000000025F8EC string=0x000000000025F8F0 "!"
 *   insn=0x000000000025F8F0 string=0x000000000025F8F4 "\t"
 *   insn=0x000000000025F8F4 string=0x000000000025F8F8 ")"
 *   insn=0x000000000025F8FC string=0x000000000025F900 " "
 *   insn=0x000000000025F90C string=0x000000000025F910 "("
 *   insn=0x000000000025F910 string=0x000000000025F914 "\t\t@"
 *   insn=0x000000000025F914 string=0x000000000025F918 ")"
 *   insn=0x000000000025F918 string=0x000000000025F91C "\t\t"
 *   insn=0x000000000025F920 string=0x000000000025F924 "\t"
 *   insn=0x000000000025F924 string=0x000000000025F928 ")"
 *   insn=0x000000000025F92C string=0x000000000025F930 " "
 *   insn=0x000000000025F95C string=0x000000000025F960 "V"
 *   insn=0x000000000025F96C string=0x000000000025F970 "hbA"
 *   insn=0x000000000025F974 string=0x000000000025F978 "t"
 *   insn=0x000000000025F974 string=0x000000000025FC10 "`"
 *   insn=0x000000000025F97C string=0x000000000025F980 "tN@"
 *   insn=0x000000000025F984 string=0x000000000025F988 "`""
 *   insn=0x000000000025F98C string=0x000000000025F990 "T`"
 *   insn=0x000000000025F990 string=0x000000000025F994 "tN@"
 *   insn=0x000000000025F998 string=0x000000000025F9A8 "`"
 *   insn=0x000000000025F99C string=0x000000000025F9A0 ""
 *   insn=0x000000000025F9A8 string=0x000000000025F9AC "t"
 *   insn=0x000000000025F9AC string=0x000000000025F9B0 " "
 *   insn=0x000000000025F9B0 string=0x000000000025F9B4 "@"
 *   insn=0x000000000025F9B4 string=0x000000000025F9B8 ""
 *   insn=0x000000000025F9B8 string=0x000000000025F9BC ""
 *   insn=0x000000000025F9C0 string=0x000000000025F9C4 ""
 *   insn=0x000000000025F9C4 string=0x000000000025F9C8 ""
 *   insn=0x000000000025F9CC string=0x000000000025F9D0 "t"
 *   insn=0x000000000025F9D4 string=0x000000000025FC08 "hbA"
 *   insn=0x000000000025F9D8 string=0x000000000025F9DC "H"
 *   insn=0x000000000025F9E0 string=0x000000000025F9E4 "tN@"
 *   insn=0x000000000025F9E8 string=0x000000000025F9EC "`""
 *   insn=0x000000000025F9F0 string=0x000000000025F9F4 ";`"
 *   insn=0x000000000025F9F4 string=0x000000000025F9F8 "tN@"
 *   insn=0x000000000025F9FC string=0x000000000025FA0C "`"
 *   insn=0x000000000025FA00 string=0x000000000025FA04 ""
 *   insn=0x000000000025FA0C string=0x000000000025FA10 "t"
 *   insn=0x000000000025FA10 string=0x000000000025FA14 "`"
 *   insn=0x000000000025FA14 string=0x000000000025FA18 "@"
 *   insn=0x000000000025FA18 string=0x000000000025FA1C ""
 *   insn=0x000000000025FA1C string=0x000000000025FA20 ""
 *   insn=0x000000000025FA24 string=0x000000000025FA28 ""
 *   insn=0x000000000025FA28 string=0x000000000025FA2C ""
 *   insn=0x000000000025FA30 string=0x000000000025FA34 "t"
 *   insn=0x000000000025FA38 string=0x000000000025FA3C "u"
 *   insn=0x000000000025FA3C string=0x000000000025FA40 ""
 *   insn=0x000000000025FA48 string=0x000000000025FA4C "%`"
 *   insn=0x000000000025FA54 string=0x000000000025FA58 "t"
 *   insn=0x000000000025FA58 string=0x000000000025FA5C "T"
 *   insn=0x000000000025FA6C string=0x000000000025FA70 ""
 *   insn=0x000000000025FA6C string=0x000000000025FAA4 "t"
 *   insn=0x000000000025FA90 string=0x000000000025FA94 "!@"
 *   insn=0x000000000025FA9C string=0x000000000025FAA0 "H"
 *   insn=0x000000000025FAA4 string=0x000000000025FAA8 "t"
 *   insn=0x000000000025FAA8 string=0x000000000025FAF4 "tN@"
 *   insn=0x000000000025FABC string=0x000000000025FAC0 "A"
 *   insn=0x000000000025FAC0 string=0x0000000000587AFE "BoneRightHand2"
 *   insn=0x000000000025FACC string=0x000000000025FAD0 ":"
 *   insn=0x000000000025FADC string=0x00000000001FC550 "0'"
 *   insn=0x000000000025FAE8 string=0x000000000025FAEC " )"
 *   insn=0x000000000025FAEC string=0x000000000025FAF0 "%"
 *   insn=0x000000000025FAF0 string=0x000000000025FB84 "hb"
 *   insn=0x000000000025FAF8 string=0x000000000025FAFC "`""
 *   insn=0x000000000025FB04 string=0x000000000025FB08 "tN@"
 *   insn=0x000000000025FB0C string=0x000000000025FB1C "`"
 *   insn=0x000000000025FB10 string=0x000000000025FB14 ""
 *   insn=0x000000000025FB1C string=0x000000000025FB20 "t"
 *   insn=0x000000000025FB20 string=0x000000000025FB24 "@"
 *   insn=0x000000000025FB24 string=0x000000000025FB28 "@"
 *   insn=0x000000000025FB28 string=0x000000000025FB2C ""
 *   insn=0x000000000025FB2C string=0x000000000025FB30 ""
 *   insn=0x000000000025FB34 string=0x000000000025FB38 ""
 *   insn=0x000000000025FB38 string=0x000000000025FB3C ""
 *   insn=0x000000000025FB40 string=0x000000000025FB44 "t"
 *   insn=0x000000000025FB48 string=0x000000000025FB4C "U"
 *   insn=0x000000000025FB6C string=0x000000000025FB70 "!@"
 *   insn=0x000000000025FB88 string=0x000000000025FB8C "7$"
 *   insn=0x000000000025FB9C string=0x000000000025FBA0 "t"
 *   insn=0x000000000025FB9C string=0x000000000025FD1C ")$"
 *   insn=0x000000000025FBA0 string=0x000000000025FBA4 "4"
 *   insn=0x000000000025FBA4 string=0x000000000025FD88 "tN@"
 *   insn=0x000000000025FBB0 string=0x000000000025FBB4 "H"
 *   insn=0x000000000025FBB8 string=0x000000000025FBBC "A"
 *   insn=0x000000000025FBBC string=0x0000000000587B0D "BoneLeftHand2"
 *   insn=0x000000000025FBD4 string=0x000000000025FBD8 "^r"
 *   insn=0x000000000025FBE4 string=0x000000000025FBE8 " )"
 *   insn=0x000000000025FBEC string=0x000000000025FBF4 "hf"
 *   insn=0x000000000025FC04 string=0x000000000025FD40 ")$"
 *   insn=0x000000000025FC08 string=0x000000000025FC0C ""
 *   insn=0x000000000025FC10 string=0x000000000025FC14 "tb\n"
 *   insn=0x000000000025FC1C string=0x000000000025FC20 "h"
 *   insn=0x000000000025FC20 string=0x000000000025FC24 "[Y"
 *   insn=0x000000000025FC24 string=0x000000000025FC28 "`NA"
 *   insn=0x000000000025FC24 string=0x00000000001F6190 "0'"
 *   insn=0x000000000025FC34 string=0x000000000025FC38 "jz"
 *   insn=0x000000000025FC38 string=0x000000000025FC3C "hNA"
 *   insn=0x000000000025FC44 string=0x000000000025FC48 " "
 *   insn=0x000000000025FC48 string=0x000000000025FC4C "yr"
 *   insn=0x000000000025FC4C string=0x000000000025FC50 "3$"
 *   insn=0x000000000025FC50 string=0x000000000025FC54 "s"
 *   insn=0x000000000025FC54 string=0x000000000025FC58 ""
 *   insn=0x000000000025FC64 string=0x000000000025FC68 ""
 *   insn=0x000000000025FC68 string=0x000000000025FC6C "Q@"
 *   insn=0x000000000025FC70 string=0x000000000025FC74 "`"
 *   insn=0x000000000025FC7C string=0x000000000025FC80 ""
 *   insn=0x000000000025FC88 string=0x000000000025FC8C "\tq@"
 *   insn=0x000000000025FC90 string=0x000000000025FC94 " "
 *   insn=0x000000000025FCA4 string=0x000000000025FCA8 "\tq@"
 *   insn=0x000000000025FCAC string=0x000000000025FCB0 " ( "
 *   insn=0x000000000025FCB8 string=0x000000000025FCBC " "
 *   insn=0x000000000025FCC4 string=0x000000000025FCC8 "I"
 *   insn=0x000000000025FCCC string=0x000000000025FCD0 "!"
 *   insn=0x000000000025FCD0 string=0x000000000025FCD4 " "
 *   insn=0x000000000025FCD8 string=0x000000000025FCDC " "
 *   insn=0x000000000025FCF4 string=0x000000000025FCF8 "!\n"
 *   insn=0x000000000025FCF8 string=0x000000000025FE3C "%Y"
 *   insn=0x000000000025FD1C string=0x000000000025FD20 ")=G"
 *   insn=0x000000000025FD20 string=0x000000000025FD24 "!"
 *   insn=0x000000000025FD28 string=0x000000000025FD2C "\t"
 *   insn=0x000000000025FD28 string=0x000000000025FD64 "\t"
 *   insn=0x000000000025FD2C string=0x000000000025FD30 "*"
 *   insn=0x000000000025FD30 string=0x000000000025FD34 "\n"
 *   insn=0x000000000025FD38 string=0x000000000025FD3C ""
 *   insn=0x000000000025FD3C string=0x000000000025FD70 "?"
 *   insn=0x000000000025FD40 string=0x000000000025FD44 ")=G"
 *   insn=0x000000000025FD44 string=0x000000000025FD48 "!"
 *   insn=0x000000000025FD48 string=0x000000000025FD4C "I"
 *   insn=0x000000000025FD4C string=0x000000000025FD50 "\t"
 *   insn=0x000000000025FD4C string=0x000000000025FE14 "\t"
 *   insn=0x000000000025FD50 string=0x000000000025FD54 "*"
 *   insn=0x000000000025FD54 string=0x000000000025FD58 "\n"
 *   insn=0x000000000025FD5C string=0x000000000025FD60 "0"
 *   insn=0x000000000025FD60 string=0x000000000025FE20 "?"
 *   insn=0x000000000025FD64 string=0x000000000025FD68 "*"
 *   insn=0x000000000025FD68 string=0x000000000025FD6C "\n"
 *   insn=0x000000000025FD70 string=0x000000000025FD74 "l"
 *   insn=0x000000000025FD7C string=0x000000000025FD80 "t"
 *   insn=0x000000000025FD80 string=0x000000000025FD84 "4"
 *   insn=0x000000000025FD8C string=0x000000000025FD90 "`""
 *   insn=0x000000000025FD94 string=0x000000000025FD98 "R_"
 *   insn=0x000000000025FD98 string=0x000000000025FD9C "tN@"
 *   insn=0x000000000025FDA0 string=0x000000000025FDB0 "`"
 *   insn=0x000000000025FDA4 string=0x000000000025FDA8 ""
 *   insn=0x000000000025FDB0 string=0x000000000025FDB4 "t"
 *   insn=0x000000000025FDB8 string=0x000000000025FDBC "@"
 *   insn=0x000000000025FDBC string=0x000000000025FDC0 ""
 *   insn=0x000000000025FDC0 string=0x000000000025FDC4 ""
 *   insn=0x000000000025FDC8 string=0x000000000025FDCC ""
 *   insn=0x000000000025FDCC string=0x000000000025FDD0 ""
 *   insn=0x000000000025FDD4 string=0x000000000025FDD8 "t"
 *   insn=0x000000000025FDE8 string=0x000000000025FDEC "=_"
 *   insn=0x000000000025FDF4 string=0x000000000025FDF8 ""
 *   insn=0x000000000025FE00 string=0x000000000025FE04 "!@"
 *   insn=0x000000000025FE0C string=0x000000000025FE10 "j"
 *   insn=0x000000000025FE14 string=0x000000000025FE18 "*"
 *   insn=0x000000000025FE18 string=0x000000000025FE1C "\n"
 *   insn=0x000000000025FE20 string=0x000000000025FE24 ","
 *   insn=0x000000000025FE28 string=0x000000000025FE2C "^)"
 *   insn=0x000000000025FE2C string=0x000000000025FE30 "hbA"
 *   insn=0x000000000025FE44 string=0x000000000025FE48 "(a"
 *   insn=0x000000000025FE50 string=0x000000000025FE54 "*$"
 *   insn=0x000000000025FE54 string=0x000000000025FE58 "J=G"
 *   insn=0x000000000025FE58 string=0x000000000025FE5C ")!"
 *   insn=0x000000000025FE60 string=0x000000000025FE64 "*"
 *   insn=0x000000000025FE60 string=0x000000000025FED4 "*"
 *   insn=0x000000000025FE64 string=0x000000000025FE68 "K"
 *   insn=0x000000000025FE68 string=0x000000000025FE6C "+"
 *   insn=0x000000000025FE74 string=0x000000000025FEB8 "_"
 *   insn=0x000000000025FE7C string=0x000000000025FE80 "*$"
 *   insn=0x000000000025FE80 string=0x000000000025FE84 "J"
 *   insn=0x000000000025FE88 string=0x000000000025FE8C "(a"
 *   insn=0x000000000025FE94 string=0x000000000025FE98 "*$"
 *   insn=0x000000000025FE98 string=0x000000000025FE9C "J=G"
 *   insn=0x000000000025FE9C string=0x000000000025FEA0 ")!"
 *   insn=0x000000000025FEA4 string=0x000000000025FEA8 "*"
 *   insn=0x000000000025FEA8 string=0x000000000025FEAC "K"
 *   insn=0x000000000025FEAC string=0x000000000025FEB0 "+"
 *   insn=0x000000000025FEC4 string=0x000000000025FEC8 "7)"
 *   insn=0x000000000025FECC string=0x000000000025FED0 "}"
 *   insn=0x000000000025FED4 string=0x000000000025FED8 "K"
 *   insn=0x000000000025FED8 string=0x000000000025FEDC "+"
 *   insn=0x000000000025FEDC string=0x000000000025FEE0 "_"
 *   insn=0x000000000025FEF0 string=0x000000000025FEF4 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CharControllerComponent::Pickup(
        Caver::CharControllerComponent *this,
        Caver::SceneObject *a2,
        char a3)
{
  unsigned int v5; // w8
  _DWORD *v6; // x0
  int v7; // w8
  _DWORD *v8; // x8
  _DWORD **v9; // x22
  _DWORD *v10; // x8
  _DWORD **v11; // x22
  _DWORD *v12; // x0
  int v13; // w8
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  int v18; // w8
  __int64 v19; // x0
  __int64 v20; // x0
  int v21; // s0
  __int64 v22; // x0
  _DWORD *v23; // x0
  int v24; // w8
  _DWORD *v25; // x20
  _DWORD *v26; // x0
  int v27; // w8
  _DWORD *v28; // x0
  int v29; // w8
  Caver::SwingableWeaponControllerComponent *v30; // x0
  Caver::SwingableWeaponControllerComponent *v31; // x0
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x0
  int v35; // w8
  __int64 v36; // x8
  __int64 v37; // x0
  _DWORD *v38; // x20
  _DWORD *v39; // x0
  int v40; // w8
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x0
  int v44; // w8
  __int64 v45; // x0
  __int64 v46; // x0
  float v47; // s0
  __int64 v48; // x0
  __int64 v49; // x8
  int v50; // s0
  _DWORD *v51; // x20
  _DWORD *v52; // x0
  int v53; // w8
  _DWORD *v54; // [xsp+B0h] [xbp-40h]
  _DWORD *v55; // [xsp+B0h] [xbp-40h]
  _DWORD *v56; // [xsp+B0h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  v5 = *((_DWORD *)this + 180);
  if ( v5 <= 4 && ((1 << v5) & 0x1A) != 0 )
    return;
  if ( a2 )
  {
    *((_DWORD *)this + 164) = 1;
    ++*((_DWORD *)a2 + 2);
    v6 = (_DWORD *)*((_QWORD *)this + 83);
    *((_QWORD *)this + 83) = a2;
    if ( v6 )
    {
      v7 = v6[2] - 1;
      v6[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  if ( !*((_BYTE *)this + 701) )
  {
    Caver::CharControllerComponent::PickupWithoutAnimation(this);
    if ( !*((_BYTE *)this + 701) )
      return;
    v10 = (_DWORD *)*((_QWORD *)this + 22);
    if ( v10 )
    {
      v11 = (_DWORD **)((char *)this + 400);
    }
    else
    {
      Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 160), this);
      v10 = (_DWORD *)*((_QWORD *)this + 22);
      v11 = (_DWORD **)((char *)this + 400);
      if ( !v10 )
      {
LABEL_59:
        v28 = *v11;
        *v11 = v10;
        if ( v28 )
        {
          v29 = v28[2] - 1;
          v28[2] = v29;
          if ( !v29 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v28 + 8LL))(v28);
        }
        v30 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)this + 56);
        *((_BYTE *)this + 456) = 1;
        if ( v30
          || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 432), this),
              (v30 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)this + 56)) != 0) )
        {
          Caver::SwingableWeaponControllerComponent::SetWeaponHidden(v30);
        }
        v31 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)this + 53);
        if ( v31
          || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 408), this),
              (v31 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)this + 53)) != 0) )
        {
          Caver::SwingableWeaponControllerComponent::SetWeaponHidden(v31);
        }
        Caver::CharControllerComponent::SetInitialAnimationControllerState(this);
        if ( (a3 & 1) == 0
          || (v32 = *((_QWORD *)this + 25)) == 0
          && (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 184), this),
              (v32 = *((_QWORD *)this + 25)) == 0) )
        {
          *((_QWORD *)this + 90) = 0x3F80000000000002LL;
LABEL_85:
          *(int32x2_t *)((char *)this + 740) = vdup_n_s32(0x7F7FFFFFu);
          *((_DWORD *)this + 139) = 0;
          *((_BYTE *)this + 580) = 0;
          return;
        }
        *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 264LL))(v32) + 12) = 0;
        if ( *v11 )
          goto LABEL_72;
        v38 = (_DWORD *)*((_QWORD *)this + 19);
        if ( v38
          || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 136), this),
              (v38 = (_DWORD *)*((_QWORD *)this + 19)) != 0) )
        {
          ++v38[2];
        }
        v39 = *v11;
        *v11 = v38;
        if ( !v39 || (v40 = v39[2] - 1, (v39[2] = v40) != 0) )
        {
LABEL_72:
          v33 = *((_QWORD *)this + 25);
          if ( v33 )
          {
LABEL_74:
            v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 264LL))(v33);
            v55 = (_DWORD *)v34;
            if ( v34 )
              ++*(_DWORD *)(v34 + 8);
            Caver::CharAnimControllerComponent::BlendFromAnimationNode();
            if ( v55 )
            {
              v35 = v55[2] - 1;
              v55[2] = v35;
              if ( !v35 )
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v55 + 8LL))(v55);
            }
            v36 = *((_QWORD *)this + 16);
            if ( !v36 )
            {
              Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 112), this);
              v36 = *((_QWORD *)this + 16);
            }
            *(_BYTE *)(v36 + 276) = 1;
            v37 = *((_QWORD *)this + 25);
            *((_QWORD *)this + 90) = 1;
            if ( !v37 )
            {
              Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 184), this);
              v37 = *((_QWORD *)this + 25);
            }
            *((_DWORD *)this + 182) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 264LL))(v37) + 40);
            goto LABEL_85;
          }
        }
        else
        {
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v39 + 8LL))(v39);
          v33 = *((_QWORD *)this + 25);
          if ( v33 )
            goto LABEL_74;
        }
        Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 184), this);
        v33 = *((_QWORD *)this + 25);
        goto LABEL_74;
      }
    }
    ++v10[2];
    goto LABEL_59;
  }
  v8 = (_DWORD *)*((_QWORD *)this + 19);
  if ( v8 )
  {
    v9 = (_DWORD **)((char *)this + 400);
LABEL_15:
    ++v8[2];
    goto LABEL_16;
  }
  Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 136), this);
  v8 = (_DWORD *)*((_QWORD *)this + 19);
  v9 = (_DWORD **)((char *)this + 400);
  if ( v8 )
    goto LABEL_15;
LABEL_16:
  v12 = *v9;
  *v9 = v8;
  if ( v12 )
  {
    v13 = v12[2] - 1;
    v12[2] = v13;
    if ( !v13 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
  }
  Caver::CharControllerComponent::SetInitialAnimationControllerState(this);
  if ( (a3 & 1) != 0 )
  {
    if ( *((_DWORD *)this + 140) || *((_DWORD *)this + 139) )
      goto LABEL_27;
    v14 = *((_QWORD *)this + 16);
    if ( !v14 )
    {
      Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 112), this);
      v14 = *((_QWORD *)this + 16);
    }
    if ( *(float *)(v14 + 128) >= 0.1 || *(float *)(v14 + 140) <= 0.0 || *(_BYTE *)(v14 + 144) )
    {
LABEL_27:
      v15 = *((_QWORD *)this + 31);
      if ( !v15 )
      {
        Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 232), this);
        v15 = *((_QWORD *)this + 31);
        if ( !v15 )
        {
LABEL_44:
          *((_DWORD *)this + 139) = 0;
          return;
        }
      }
      *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 264LL))(v15) + 12) = 0;
      if ( *v9 )
        goto LABEL_30;
      v25 = (_DWORD *)*((_QWORD *)this + 19);
      if ( v25
        || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 136), this),
            (v25 = (_DWORD *)*((_QWORD *)this + 19)) != 0) )
      {
        ++v25[2];
      }
      v26 = *v9;
      *v9 = v25;
      if ( !v26 || (v27 = v26[2] - 1, (v26[2] = v27) != 0) )
      {
LABEL_30:
        v16 = *((_QWORD *)this + 31);
        if ( v16 )
        {
LABEL_32:
          v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 264LL))(v16);
          v54 = (_DWORD *)v17;
          if ( v17 )
            ++*(_DWORD *)(v17 + 8);
          Caver::CharAnimControllerComponent::BlendFromAnimationNode();
          if ( v54 )
          {
            v18 = v54[2] - 1;
            v54[2] = v18;
            if ( !v18 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v54 + 8LL))(v54);
          }
          v19 = *((_QWORD *)this + 31);
          *((_QWORD *)this + 90) = 0x3F80000000000004LL;
          if ( !v19 )
          {
            Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 232), this);
            v19 = *((_QWORD *)this + 31);
          }
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 264LL))(v19);
          v21 = 1008981770;
          if ( *(float *)(v20 + 40) >= 0.01 )
          {
            v22 = *((_QWORD *)this + 31);
            if ( !v22 )
            {
              Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 232), this);
              v22 = *((_QWORD *)this + 31);
            }
            v21 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 264LL))(v22) + 40);
          }
          *((_DWORD *)this + 182) = v21;
          *(_QWORD *)((char *)this + 740) = 0;
          goto LABEL_44;
        }
      }
      else
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 8LL))(v26);
        v16 = *((_QWORD *)this + 31);
        if ( v16 )
          goto LABEL_32;
      }
      Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 232), this);
      v16 = *((_QWORD *)this + 31);
      goto LABEL_32;
    }
    v41 = *((_QWORD *)this + 28);
    if ( !v41 )
    {
      Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 208), this);
      v41 = *((_QWORD *)this + 28);
      if ( !v41 )
        return;
    }
    *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 264LL))(v41) + 12) = 0;
    if ( *v9 )
      goto LABEL_96;
    v51 = (_DWORD *)*((_QWORD *)this + 19);
    if ( v51
      || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 136), this),
          (v51 = (_DWORD *)*((_QWORD *)this + 19)) != 0) )
    {
      ++v51[2];
    }
    v52 = *v9;
    *v9 = v51;
    if ( !v52 || (v53 = v52[2] - 1, (v52[2] = v53) != 0) )
    {
LABEL_96:
      v42 = *((_QWORD *)this + 28);
      if ( v42 )
      {
LABEL_98:
        v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 264LL))(v42);
        v56 = (_DWORD *)v43;
        if ( v43 )
          ++*(_DWORD *)(v43 + 8);
        Caver::CharAnimControllerComponent::BlendFromAnimationNode();
        if ( v56 )
        {
          v44 = v56[2] - 1;
          v56[2] = v44;
          if ( !v44 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v56 + 8LL))(v56);
        }
        v45 = *((_QWORD *)this + 28);
        *((_QWORD *)this + 90) = 0x3F80000000000003LL;
        if ( !v45 )
        {
          Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 208), this);
          v45 = *((_QWORD *)this + 28);
        }
        v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 264LL))(v45);
        v47 = 0.01;
        if ( (float)(*(float *)(v46 + 40) + -0.08) >= 0.01 )
        {
          v48 = *((_QWORD *)this + 28);
          if ( !v48 )
          {
            Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 208), this);
            v48 = *((_QWORD *)this + 28);
          }
          v47 = *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 264LL))(v48) + 40) + -0.08;
        }
        v49 = *((_QWORD *)this + 16);
        *((float *)this + 182) = v47;
        if ( !v49 )
        {
          Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 112), this);
          v49 = *((_QWORD *)this + 16);
        }
        v50 = *(_DWORD *)(v49 + 112);
        *((_DWORD *)this + 186) = -1046478848;
        *((float *)this + 185) = (float)v50 * 10.0;
        return;
      }
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v52 + 8LL))(v52);
      v42 = *((_QWORD *)this + 28);
      if ( v42 )
        goto LABEL_98;
    }
    Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 208), this);
    v42 = *((_QWORD *)this + 28);
    goto LABEL_98;
  }
  if ( *((_BYTE *)this + 701) )
  {
    Caver::SceneObject::HandleMessage(*((Caver::SceneObject **)this + 83), 17, 0);
    Caver::SceneObject::RemoveChildObject(*((Caver::SceneObject **)this + 5), *((Caver::SceneObject **)this + 83), 0);
    v23 = (_DWORD *)*((_QWORD *)this + 83);
    *((_QWORD *)this + 83) = 0;
    if ( v23 )
    {
      v24 = v23[2] - 1;
      v23[2] = v24;
      if ( !v24 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 8LL))(v23);
    }
    *((_BYTE *)this + 701) = 0;
    *((_DWORD *)this + 180) = 0;
  }
}

