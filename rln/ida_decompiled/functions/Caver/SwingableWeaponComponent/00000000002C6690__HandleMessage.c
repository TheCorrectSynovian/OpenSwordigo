/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C6690
 * Mangled: _ZN5Caver24SwingableWeaponComponent13HandleMessageEiPv
 * Demangled: Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 31
 *   0x00000000001F3DF0  Caver::DamageComponent::AddPotentialImpact(boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector2 const&,Caver::Vector2 const&,bool,Caver::Vector4 const&)
 *   0x00000000001F3FD0  Caver::CollisionShapeComponent::collisionShape(void)
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001F8E80  Caver::CollisionShape::NearestPointInShape(Caver::Vector2 const&)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FAE20  Caver::CollisionShape::IntersectsWithLineSegment(Caver::LineSegment const&,Caver::Vector2 *,Caver::Vector2 *,int *)
 *   0x00000000001FBBD0  Caver::SwingableWeaponComponent::~SwingableWeaponComponent()
 *   0x00000000001FD0C0  Caver::SoundLibrary::sharedLibrary(void)
 *   0x00000000001FDEE0  Caver::AudioSystem::PlaySoundEffect(boost::intrusive_ptr<Caver::SoundEffect> const&,float)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FDFA0  Caver::SoundLibrary::EffectForName(std::string const&)
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x0000000000202870  Caver::SwingableWeaponControllerComponent::KnockBack(void)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *   0x00000000002C7400  Caver::SwingableWeaponComponent::Clone(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 437
 *   insn=0x00000000002C66A8 string=0x00000000002C66AC "W"
 *   insn=0x00000000002C66B8 string=0x00000000002C66BC "?"
 *   insn=0x00000000002C66C4 string=0x00000000002C66C8 "?4"
 *   insn=0x00000000002C66C8 string=0x00000000002C66CC "a"
 *   insn=0x00000000002C66CC string=0x00000000002C66D0 "h"
 *   insn=0x00000000002C66D0 string=0x00000000002C66D4 "H"
 *   insn=0x00000000002C66D8 string=0x00000000002C66DC "W"
 *   insn=0x00000000002C66E0 string=0x00000000002C66E4 "hR@"
 *   insn=0x00000000002C66EC string=0x00000000002C67E8 "`B"
 *   insn=0x00000000002C66F4 string=0x00000000002C66F8 "B"
 *   insn=0x00000000002C6700 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002C6704 string=0x00000000002C6708 "\n"
 *   insn=0x00000000002C6708 string=0x00000000001FAB30 "0'"
 *   insn=0x00000000002C6710 string=0x00000000002C6714 ""
 *   insn=0x00000000002C6718 string=0x00000000002C671C "h"
 *   insn=0x00000000002C671C string=0x00000000002C6720 ""
 *   insn=0x00000000002C6728 string=0x0000000000588C40 "particle_blast"
 *   insn=0x00000000002C6734 string=0x00000000002C6738 " "
 *   insn=0x00000000002C6748 string=0x00000000002C674C ""
 *   insn=0x00000000002C6758 string=0x00000000001F5A20 "P'"
 *   insn=0x00000000002C6760 string=0x00000000002C6764 "@"
 *   insn=0x00000000002C6764 string=0x00000000002C6768 ""
 *   insn=0x00000000002C6768 string=0x00000000002C676C ""
 *   insn=0x00000000002C6770 string=0x00000000002C6774 ""
 *   insn=0x00000000002C6774 string=0x00000000002C6778 ""
 *   insn=0x00000000002C6794 string=0x00000000002C6798 "h"
 *   insn=0x00000000002C67A0 string=0x00000000002C67A4 "y@"
 *   insn=0x00000000002C67CC string=0x00000000002C67D0 "!"
 *   insn=0x00000000002C67D0 string=0x00000000002C67D4 "  ""
 *   insn=0x00000000002C67D4 string=0x00000000002C67D8 "i"
 *   insn=0x00000000002C67E0 string=0x00000000002C67E4 "("
 *   insn=0x00000000002C67F0 string=0x00000000002C67F4 "hR@"
 *   insn=0x00000000002C67F0 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C680C string=0x00000000002C6810 "U"
 *   insn=0x00000000002C6814 string=0x00000000002C6818 ""
 *   insn=0x00000000002C6820 string=0x00000000002C6824 "!(B"
 *   insn=0x00000000002C6824 string=0x00000000002C6828 "n"
 *   insn=0x00000000002C6824 string=0x000000000021C13C "@&"
 *   insn=0x00000000002C6828 string=0x00000000002C682C "h"
 *   insn=0x00000000002C682C string=0x00000000002C6830 "("
 *   insn=0x00000000002C6830 string=0x00000000002C69F4 "h"
 *   insn=0x00000000002C6840 string=0x00000000002C6844 "a)"
 *   insn=0x00000000002C6844 string=0x00000000002C6D70 "X"
 *   insn=0x00000000002C686C string=0x00000000002C6870 "#8#"
 *   insn=0x00000000002C6870 string=0x00000000002C6874 "c"
 *   insn=0x00000000002C6874 string=0x00000000002C6878 "` ""
 *   insn=0x00000000002C6878 string=0x00000000002C687C "I"
 *   insn=0x00000000002C687C string=0x00000000002C6880 ")"
 *   insn=0x00000000002C6884 string=0x00000000002C6888 "\t"
 *   insn=0x00000000002C6894 string=0x00000000002C6898 "B"
 *   insn=0x00000000002C6898 string=0x00000000001F5DA0 "P'"
 *   insn=0x00000000002C68A8 string=0x00000000002C68AC "h"
 *   insn=0x00000000002C68B0 string=0x00000000002C68B4 ""
 *   insn=0x00000000002C68B4 string=0x00000000002C68B8 ""
 *   insn=0x00000000002C68C0 string=0x00000000002C68C4 "`:@"
 *   insn=0x00000000002C68CC string=0x00000000002C68D0 "H"
 *   insn=0x00000000002C68D8 string=0x00000000002C68DC "H"
 *   insn=0x00000000002C68DC string=0x00000000002C69A4 "`"
 *   insn=0x00000000002C68E0 string=0x00000000001FDF30 "0'"
 *   insn=0x00000000002C68E8 string=0x00000000001FD0C0 "0'"
 *   insn=0x00000000002C68F0 string=0x0000000000588CAF "shield_block"
 *   insn=0x00000000002C6910 string=0x00000000001FDFA0 "0'"
 *   insn=0x00000000002C6920 string=0x00000000002C6924 "o"
 *   insn=0x00000000002C6924 string=0x00000000001FDEE0 "0'"
 *   insn=0x00000000002C692C string=0x00000000002C6930 "@"
 *   insn=0x00000000002C6930 string=0x00000000002C6934 ""
 *   insn=0x00000000002C6934 string=0x00000000002C6938 ""
 *   insn=0x00000000002C693C string=0x00000000002C6940 ""
 *   insn=0x00000000002C6940 string=0x00000000002C6944 ""
 *   insn=0x00000000002C6950 string=0x00000000002C6954 "@"
 *   insn=0x00000000002C6954 string=0x00000000002C6958 ""
 *   insn=0x00000000002C6958 string=0x00000000002C695C ""
 *   insn=0x00000000002C6960 string=0x00000000002C6964 ""
 *   insn=0x00000000002C6964 string=0x00000000002C6968 ""
 *   insn=0x00000000002C6978 string=0x00000000002C697C "@"
 *   insn=0x00000000002C6980 string=0x00000000002C6984 ")=G"
 *   insn=0x00000000002C6984 string=0x00000000002C6988 "!"
 *   insn=0x00000000002C6988 string=0x00000000002C698C ")"
 *   insn=0x00000000002C698C string=0x00000000002C6990 "\t"
 *   insn=0x00000000002C698C string=0x00000000002C6D50 "\t"
 *   insn=0x00000000002C6990 string=0x00000000002C6994 "*"
 *   insn=0x00000000002C6994 string=0x00000000002C6998 "\n"
 *   insn=0x00000000002C69A0 string=0x00000000002C6D5C "?"
 *   insn=0x00000000002C69A8 string=0x00000000002C69AC "`"
 *   insn=0x00000000002C69A8 string=0x00000000002C69C0 "x"
 *   insn=0x00000000002C69B0 string=0x00000000002C69B4 "K"
 *   insn=0x00000000002C69B4 string=0x00000000002C69B8 "`"
 *   insn=0x00000000002C69B8 string=0x00000000002C69BC "@"
 *   insn=0x00000000002C69C0 string=0x00000000001F4FA0 "P'"
 *   insn=0x00000000002C69C4 string=0x00000000002C69C8 "h"
 *   insn=0x00000000002C69CC string=0x00000000002C69D0 "@"
 *   insn=0x00000000002C69D0 string=0x00000000002C69D4 "@"
 *   insn=0x00000000002C69D4 string=0x00000000002C69D8 ""
 *   insn=0x00000000002C69D8 string=0x00000000002C69DC ""
 *   insn=0x00000000002C69E0 string=0x00000000002C69E4 ""
 *   insn=0x00000000002C69E4 string=0x00000000002C69E8 ""
 *   insn=0x00000000002C69EC string=0x00000000002C69F0 ":"
 *   insn=0x00000000002C69F8 string=0x00000000002C69FC "\t"
 *   insn=0x00000000002C6A04 string=0x00000000002C6A08 ""
 *   insn=0x00000000002C6A04 string=0x00000000002C6A18 "v"
 *   insn=0x00000000002C6A08 string=0x00000000002C6A0C "\t"
 *   insn=0x00000000002C6A18 string=0x00000000002C6A1C "uB"
 *   insn=0x00000000002C6A24 string=0x00000000002C6A28 "j"
 *   insn=0x00000000002C6A30 string=0x0000000000583734 "o"
 *   insn=0x00000000002C6A34 string=0x00000000002C6A38 "!"
 *   insn=0x00000000002C6A38 string=0x00000000002C6A3C "   "
 *   insn=0x00000000002C6A44 string=0x00000000002C6A48 "!"
 *   insn=0x00000000002C6A48 string=0x00000000002C6A4C "   "
 *   insn=0x00000000002C6A4C string=0x00000000002C6A50 "I"
 *   insn=0x00000000002C6A58 string=0x00000000002C6A5C "]"
 *   insn=0x00000000002C6A6C string=0x00000000001F8E10 "0'"
 *   insn=0x00000000002C6A74 string=0x00000000002C6A80 "h"
 *   insn=0x00000000002C6A80 string=0x00000000002C6A84 "`"
 *   insn=0x00000000002C6A94 string=0x00000000002C6A98 ""\t""
 *   insn=0x00000000002C6A9C string=0x00000000002C6AA0 "c "
 *   insn=0x00000000002C6AA0 string=0x00000000002C6AA4 "@ "
 *   insn=0x00000000002C6AA8 string=0x00000000002C6AAC "!\t!"
 *   insn=0x00000000002C6AB0 string=0x00000000002C6AB4 "c($"
 *   insn=0x00000000002C6ACC string=0x00000000002C6AD0 "@"
 *   insn=0x00000000002C6AD0 string=0x00000000001F3FD0 "P'"
 *   insn=0x00000000002C6ADC string=0x00000000002C6AE0 "@"
 *   insn=0x00000000002C6AE0 string=0x00000000002C6B08 "h"
 *   insn=0x00000000002C6AF8 string=0x00000000002C6AFC "`"
 *   insn=0x00000000002C6AF8 string=0x00000000001FAE20 "0'"
 *   insn=0x00000000002C6B00 string=0x00000000002C6B04 ""
 *   insn=0x00000000002C6B18 string=0x00000000001F8E80 "0'"
 *   insn=0x00000000002C6B24 string=0x00000000002C6B28 "h"
 *   insn=0x00000000002C6B2C string=0x0000000000583944 "\n"
 *   insn=0x00000000002C6B30 string=0x00000000002C6B34 "$EI"
 *   insn=0x00000000002C6B3C string=0x00000000002C6B40 "E"
 *   insn=0x00000000002C6B44 string=0x00000000002C6B48 "#8#"
 *   insn=0x00000000002C6B4C string=0x00000000002C6B50 "e"
 *   insn=0x00000000002C6B58 string=0x00000000002C6B74 "b"
 *   insn=0x00000000002C6B7C string=0x00000000002C6B80 "!($"
 *   insn=0x00000000002C6B80 string=0x00000000002C6B84 "B"
 *   insn=0x00000000002C6B84 string=0x00000000002C6B88 "B#"
 *   insn=0x00000000002C6B98 string=0x00000000002C6B9C "A"
 *   insn=0x00000000002C6BA0 string=0x00000000002C6BA4 "`"
 *   insn=0x00000000002C6BAC string=0x00000000002C6BB0 "\t\t@"
 *   insn=0x00000000002C6BB0 string=0x00000000002C6BB4 ")"
 *   insn=0x00000000002C6BB4 string=0x00000000002C6BB8 "\t\t"
 *   insn=0x00000000002C6BD4 string=0x00000000001F3DF0 "P'"
 *   insn=0x00000000002C6BDC string=0x00000000002C6CEC "@"
 *   insn=0x00000000002C6BE4 string=0x00000000002C6BE8 "h"
 *   insn=0x00000000002C6BEC string=0x00000000002C6BF0 "t"
 *   insn=0x00000000002C6BF8 string=0x00000000002C6BFC "\t\t@"
 *   insn=0x00000000002C6BF8 string=0x00000000002C6C08 "`"
 *   insn=0x00000000002C6BFC string=0x00000000002C6C00 ")"
 *   insn=0x00000000002C6C00 string=0x00000000002C6C04 "\t\t"
 *   insn=0x00000000002C6C08 string=0x00000000002C6C0C "a"
 *   insn=0x00000000002C6C0C string=0x00000000002C6C10 "b"
 *   insn=0x00000000002C6C10 string=0x00000000002C6C14 "c"
 *   insn=0x00000000002C6C14 string=0x00000000002C6C18 "d"
 *   insn=0x00000000002C6C18 string=0x00000000002C6C1C "e"
 *   insn=0x00000000002C6C1C string=0x00000000002C6C20 ""
 *   insn=0x00000000002C6C24 string=0x00000000002C6C28 "!$"
 *   insn=0x00000000002C6C28 string=0x00000000002C6C2C "d$"
 *   insn=0x00000000002C6C2C string=0x00000000002C6C30 "C#"
 *   insn=0x00000000002C6C30 string=0x00000000002C6C34 "G%"
 *   insn=0x00000000002C6C48 string=0x00000000002C6C4C "C""
 *   insn=0x00000000002C6C4C string=0x00000000002C6C50 "$!"
 *   insn=0x00000000002C6C50 string=0x00000000002C6C54 "c($"
 *   insn=0x00000000002C6C5C string=0x00000000002C6C60 "` %"
 *   insn=0x00000000002C6C84 string=0x00000000002C6C88 "h"
 *   insn=0x00000000002C6C98 string=0x00000000002C6C9C "#"
 *   insn=0x00000000002C6CA0 string=0x00000000002C6CA4 "!#"
 *   insn=0x00000000002C6CA4 string=0x00000000002C6CA8 "C"
 *   insn=0x00000000002C6CA8 string=0x00000000002C6CAC "B#"
 *   insn=0x00000000002C6CAC string=0x00000000002C6CB0 "c"
 *   insn=0x00000000002C6CB0 string=0x00000000002C6CB4 "!(""
 *   insn=0x00000000002C6CDC string=0x00000000002C6CE0 "D"
 *   insn=0x00000000002C6CE4 string=0x00000000002C6CE8 "`"
 *   insn=0x00000000002C6CEC string=0x00000000002C6CF0 ""
 *   insn=0x00000000002C6CF0 string=0x00000000002C6CF4 ""
 *   insn=0x00000000002C6CF8 string=0x00000000002C6CFC ""
 *   insn=0x00000000002C6CFC string=0x00000000002C6D00 ""
 *   insn=0x00000000002C6D0C string=0x00000000002C6D10 ")=G"
 *   insn=0x00000000002C6D10 string=0x00000000002C6D14 "!"
 *   insn=0x00000000002C6D18 string=0x00000000002C6D1C "\t"
 *   insn=0x00000000002C6D18 string=0x00000000002C6D30 "\t"
 *   insn=0x00000000002C6D1C string=0x00000000002C6D20 "*"
 *   insn=0x00000000002C6D20 string=0x00000000002C6D24 "\n"
 *   insn=0x00000000002C6D2C string=0x00000000002C6D3C "?"
 *   insn=0x00000000002C6D30 string=0x00000000002C6D34 "*"
 *   insn=0x00000000002C6D34 string=0x00000000002C6D38 "\n"
 *   insn=0x00000000002C6D50 string=0x00000000002C6D54 "*"
 *   insn=0x00000000002C6D54 string=0x00000000002C6D58 "\n"
 *   insn=0x00000000002C6D5C string=0x00000000002C6D60 ","
 *   insn=0x00000000002C6D70 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C6D78 string=0x00000000002C6D7C "h"
 *   insn=0x00000000002C6D7C string=0x00000000002C6D80 "\t\t@"
 *   insn=0x00000000002C6D80 string=0x00000000002C6D84 ")"
 *   insn=0x00000000002C6D84 string=0x00000000002C6D88 "\t\t"
 *   insn=0x00000000002C6D8C string=0x00000000002C6D90 "\t"
 *   insn=0x00000000002C6D90 string=0x00000000002C6D94 ")"
 *   insn=0x00000000002C6D98 string=0x00000000002C6D9C " "
 *   insn=0x00000000002C6D9C string=0x00000000002C6DA0 "b"
 *   insn=0x00000000002C6DAC string=0x00000000002C6DB0 "\t\t@"
 *   insn=0x00000000002C6DB0 string=0x00000000002C6DB4 ")"
 *   insn=0x00000000002C6DB4 string=0x00000000002C6DB8 "\t\t"
 *   insn=0x00000000002C6DB8 string=0x00000000002C6DBC "a"
 *   insn=0x00000000002C6DBC string=0x00000000002C6DC0 "\t"
 *   insn=0x00000000002C6DC0 string=0x00000000002C6DC4 ")"
 *   insn=0x00000000002C6DC8 string=0x00000000002C6DCC " "
 *   insn=0x00000000002C6DCC string=0x00000000002C6DD0 "V"
 *   insn=0x00000000002C6DE0 string=0x00000000002C6DE4 "h"
 *   insn=0x00000000002C6DE4 string=0x00000000002C6DE8 "\t\t@"
 *   insn=0x00000000002C6DE8 string=0x00000000002C6DEC ")"
 *   insn=0x00000000002C6DEC string=0x00000000002C6DF0 "\t\t"
 *   insn=0x00000000002C6DF4 string=0x00000000002C6DF8 "\t"
 *   insn=0x00000000002C6DF8 string=0x00000000002C6DFC ")"
 *   insn=0x00000000002C6E00 string=0x00000000002C6E04 " "
 *   insn=0x00000000002C6E18 string=0x00000000002C6E1C "@"
 *   insn=0x00000000002C6E20 string=0x00000000002C6E24 ")=G"
 *   insn=0x00000000002C6E24 string=0x00000000002C6E28 "!"
 *   insn=0x00000000002C6E2C string=0x00000000002C6E30 "\t"
 *   insn=0x00000000002C6E2C string=0x00000000002C6EE4 "\t"
 *   insn=0x00000000002C6E30 string=0x00000000002C6E34 "*"
 *   insn=0x00000000002C6E34 string=0x00000000002C6E38 "\n"
 *   insn=0x00000000002C6E3C string=0x00000000002C6E40 """
 *   insn=0x00000000002C6E40 string=0x00000000002C6EC8 "?"
 *   insn=0x00000000002C6E48 string=0x00000000002C6E4C "("
 *   insn=0x00000000002C6E4C string=0x00000000002C6E50 "\t\t@"
 *   insn=0x00000000002C6E50 string=0x00000000002C6E54 ")"
 *   insn=0x00000000002C6E54 string=0x00000000002C6E58 "\t\t"
 *   insn=0x00000000002C6E5C string=0x00000000002C6E60 "\t"
 *   insn=0x00000000002C6E60 string=0x00000000002C6E64 ")"
 *   insn=0x00000000002C6E68 string=0x00000000002C6E6C " "
 *   insn=0x00000000002C6E6C string=0x00000000002C6E70 ""
 *   insn=0x00000000002C6E80 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002C6E94 string=0x00000000002C6E98 ")"
 *   insn=0x00000000002C6EA8 string=0x00000000002C6EAC ")=G"
 *   insn=0x00000000002C6EAC string=0x00000000002C6EB0 "!"
 *   insn=0x00000000002C6EB4 string=0x00000000002C6EB8 "\t"
 *   insn=0x00000000002C6EB8 string=0x00000000002C6EBC "*"
 *   insn=0x00000000002C6EBC string=0x00000000002C6EC0 "\n"
 *   insn=0x00000000002C6ED0 string=0x00000000002C6ED4 "4"
 *   insn=0x00000000002C6EDC string=0x00000000002C6F0C "@"
 *   insn=0x00000000002C6EE4 string=0x00000000002C6EE8 "*"
 *   insn=0x00000000002C6EE8 string=0x00000000002C6EEC "\n"
 *   insn=0x00000000002C6EEC string=0x00000000002C6EF0 "?"
 *   insn=0x00000000002C6F0C string=0x00000000002C6F10 ""
 *   insn=0x00000000002C6F10 string=0x00000000002C6F14 ""
 *   insn=0x00000000002C6F18 string=0x00000000002C6F1C ""
 *   insn=0x00000000002C6F1C string=0x00000000002C6F20 ""
 *   insn=0x00000000002C6F28 string=0x00000000002C6F2C "f"
 *   insn=0x00000000002C6F2C string=0x00000000002C6F30 ""
 *   insn=0x00000000002C6F40 string=0x00000000002C6F44 ""
 *   insn=0x00000000002C6F48 string=0x00000000002C6F4C "`"
 *   insn=0x00000000002C6F4C string=0x00000000002C6F50 "\n"
 *   insn=0x00000000002C6F50 string=0x00000000002C6F54 "\tA"
 *   insn=0x00000000002C6F54 string=0x00000000002C6F58 "@"
 *   insn=0x00000000002C6F58 string=0x00000000002C6F5C ""
 *   insn=0x00000000002C6F60 string=0x00000000002C6F64 "i"
 *   insn=0x00000000002C6F64 string=0x00000000002C6F68 "`"
 *   insn=0x00000000002C6F6C string=0x00000000002C6F70 "@"
 *   insn=0x00000000002C6F6C string=0x00000000002C6F8C "`"
 *   insn=0x00000000002C6F70 string=0x00000000002C6F74 ""
 *   insn=0x00000000002C6F74 string=0x00000000002C6F78 ""
 *   insn=0x00000000002C6F7C string=0x00000000002C6F80 ""
 *   insn=0x00000000002C6F80 string=0x00000000002C6F84 ""
 *   insn=0x00000000002C6F90 string=0x00000000002C6F94 "@"
 *   insn=0x00000000002C6F90 string=0x00000000002C6FB0 "`"
 *   insn=0x00000000002C6F94 string=0x00000000002C6F98 ""
 *   insn=0x00000000002C6F98 string=0x00000000002C6F9C ""
 *   insn=0x00000000002C6FA0 string=0x00000000002C6FA4 ""
 *   insn=0x00000000002C6FA4 string=0x00000000002C6FA8 ""
 *   insn=0x00000000002C6FB4 string=0x00000000002C6FB8 "@"
 *   insn=0x00000000002C6FB8 string=0x00000000002C6FBC ""
 *   insn=0x00000000002C6FBC string=0x00000000002C6FC0 ""
 *   insn=0x00000000002C6FC4 string=0x00000000002C6FC8 ""
 *   insn=0x00000000002C6FC8 string=0x00000000002C6FCC ""
 *   insn=0x00000000002C6FD4 string=0x00000000002C6FD8 "`"
 *   insn=0x00000000002C6FD8 string=0x00000000002C6FDC ")E"
 *   insn=0x00000000002C6FE0 string=0x00000000002C6FE4 "t"
 *   insn=0x00000000002C6FE8 string=0x00000000002C6FEC "@"
 *   insn=0x00000000002C6FE8 string=0x00000000002C7008 "`"
 *   insn=0x00000000002C6FEC string=0x00000000002C6FF0 ""
 *   insn=0x00000000002C6FF0 string=0x00000000002C6FF4 ""
 *   insn=0x00000000002C6FF8 string=0x00000000002C6FFC ""
 *   insn=0x00000000002C6FFC string=0x00000000002C7000 ""
 *   insn=0x00000000002C7008 string=0x00000000002C700C "t"
 *   insn=0x00000000002C7010 string=0x00000000002C7014 "@"
 *   insn=0x00000000002C7010 string=0x00000000002C7030 "!"
 *   insn=0x00000000002C7014 string=0x00000000002C7018 ""
 *   insn=0x00000000002C7018 string=0x00000000002C701C ""
 *   insn=0x00000000002C7020 string=0x00000000002C7024 ""
 *   insn=0x00000000002C7024 string=0x00000000002C7028 ""
 *   insn=0x00000000002C7030 string=0x00000000002C7034 "`"
 *   insn=0x00000000002C7034 string=0x00000000002C7038 "mB"
 *   insn=0x00000000002C7038 string=0x00000000002C703C "A"
 *   insn=0x00000000002C703C string=0x00000000002C7040 "h"
 *   insn=0x00000000002C7044 string=0x00000000002C7048 "@"
 *   insn=0x00000000002C7048 string=0x00000000002C704C ""
 *   insn=0x00000000002C704C string=0x00000000002C7050 ""
 *   insn=0x00000000002C7054 string=0x00000000002C7058 ""
 *   insn=0x00000000002C7058 string=0x00000000002C705C ""
 *   insn=0x00000000002C7064 string=0x00000000002C7068 "`"
 *   insn=0x00000000002C7068 string=0x00000000002C706C ""
 *   insn=0x00000000002C706C string=0x00000000002C7070 "A"
 *   insn=0x00000000002C7070 string=0x00000000002C7074 "h~"
 *   insn=0x00000000002C7078 string=0x00000000002C707C "@"
 *   insn=0x00000000002C707C string=0x00000000002C7080 ""
 *   insn=0x00000000002C7080 string=0x00000000002C7084 ""
 *   insn=0x00000000002C7088 string=0x00000000002C708C ""
 *   insn=0x00000000002C708C string=0x00000000002C7090 ""
 *   insn=0x00000000002C7098 string=0x00000000002C709C "`z@"
 *   insn=0x00000000002C709C string=0x00000000002C70A0 ""
 *   insn=0x00000000002C70A4 string=0x00000000002C70A8 "tr"
 *   insn=0x00000000002C70AC string=0x00000000002C70B0 "@"
 *   insn=0x00000000002C70AC string=0x00000000002C70CC "`n@"
 *   insn=0x00000000002C70B0 string=0x00000000002C70B4 ""
 *   insn=0x00000000002C70B4 string=0x00000000002C70B8 ""
 *   insn=0x00000000002C70BC string=0x00000000002C70C0 ""
 *   insn=0x00000000002C70C0 string=0x00000000002C70C4 ""
 *   insn=0x00000000002C70CC string=0x00000000002C70D0 "tf"
 *   insn=0x00000000002C70D4 string=0x00000000002C70D8 "@"
 *   insn=0x00000000002C70D8 string=0x00000000002C70DC ""
 *   insn=0x00000000002C70DC string=0x00000000002C70E0 ""
 *   insn=0x00000000002C70E4 string=0x00000000002C70E8 ""
 *   insn=0x00000000002C70E8 string=0x00000000002C70EC ""
 *   insn=0x00000000002C70F4 string=0x00000000002C70F8 "`R@"
 *   insn=0x00000000002C70F8 string=0x00000000002C70FC ""
 *   insn=0x00000000002C70FC string=0x00000000002C7100 "A"
 *   insn=0x00000000002C7100 string=0x00000000002C7104 "hJ"
 *   insn=0x00000000002C7108 string=0x00000000002C710C "@"
 *   insn=0x00000000002C710C string=0x00000000002C7110 ""
 *   insn=0x00000000002C7110 string=0x00000000002C7114 ""
 *   insn=0x00000000002C7118 string=0x00000000002C711C ""
 *   insn=0x00000000002C711C string=0x00000000002C7120 ""
 *   insn=0x00000000002C7128 string=0x00000000002C712C "`F@"
 *   insn=0x00000000002C712C string=0x00000000002C7130 "i@"
 *   insn=0x00000000002C7130 string=0x00000000002C7134 "A"
 *   insn=0x00000000002C7134 string=0x00000000002C7138 "h>"
 *   insn=0x00000000002C713C string=0x00000000002C7140 "@"
 *   insn=0x00000000002C7140 string=0x00000000002C7144 ""
 *   insn=0x00000000002C7144 string=0x00000000002C7148 ""
 *   insn=0x00000000002C714C string=0x00000000002C7150 ""
 *   insn=0x00000000002C7150 string=0x00000000002C7154 ""
 *   insn=0x00000000002C7168 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002C717C string=0x00000000002C7180 "s"
 *   insn=0x00000000002C7184 string=0x00000000002C7188 "d"
 *   insn=0x00000000002C718C string=0x00000000002C7190 "U"
 *   insn=0x00000000002C7194 string=0x00000000002C7198 "F"
 *   insn=0x00000000002C719C string=0x00000000002C71A0 "7"
 *   insn=0x00000000002C71A0 string=0x00000000002C727C "!"
 *   insn=0x00000000002C71A4 string=0x00000000002C71A8 "("
 *   insn=0x00000000002C71B4 string=0x00000000002C71B8 "`"
 *   insn=0x00000000002C71BC string=0x00000000002C71F8 "@"
 *   insn=0x00000000002C71C8 string=0x00000000002C71CC "("
 *   insn=0x00000000002C71CC string=0x00000000002C71D0 "\t\t@"
 *   insn=0x00000000002C71CC string=0x00000000002C71F0 "`"
 *   insn=0x00000000002C71D0 string=0x00000000002C71D4 ")"
 *   insn=0x00000000002C71D4 string=0x00000000002C71D8 "\t\t"
 *   insn=0x00000000002C71DC string=0x00000000002C71E0 "\t"
 *   insn=0x00000000002C71E0 string=0x00000000002C71E4 ")"
 *   insn=0x00000000002C71E8 string=0x00000000002C71EC " "
 *   insn=0x00000000002C71F8 string=0x00000000002C71FC ""
 *   insn=0x00000000002C71FC string=0x00000000002C7200 ""
 *   insn=0x00000000002C7204 string=0x00000000002C7208 ""
 *   insn=0x00000000002C7208 string=0x00000000002C720C ""
 *   insn=0x00000000002C7214 string=0x00000000002C7218 "`"
 *   insn=0x00000000002C7218 string=0x00000000002C721C ")E"
 *   insn=0x00000000002C721C string=0x00000000002C7220 "A"
 *   insn=0x00000000002C7220 string=0x00000000002C7224 "h"
 *   insn=0x00000000002C7228 string=0x00000000002C722C "@"
 *   insn=0x00000000002C722C string=0x00000000002C7230 ""
 *   insn=0x00000000002C7230 string=0x00000000002C7234 ""
 *   insn=0x00000000002C7238 string=0x00000000002C723C ""
 *   insn=0x00000000002C723C string=0x00000000002C7240 ""
 *   insn=0x00000000002C7248 string=0x00000000002C724C "`"
 *   insn=0x00000000002C724C string=0x00000000002C7250 ")E"
 *   insn=0x00000000002C7250 string=0x00000000002C7254 "A"
 *   insn=0x00000000002C7254 string=0x00000000002C7258 "h"
 *   insn=0x00000000002C725C string=0x00000000002C7260 "@"
 *   insn=0x00000000002C7260 string=0x00000000002C7264 ""
 *   insn=0x00000000002C7264 string=0x00000000002C7268 ""
 *   insn=0x00000000002C726C string=0x00000000002C7270 ""
 *   insn=0x00000000002C7270 string=0x00000000002C7274 ""
 *   insn=0x00000000002C727C string=0x00000000002C7280 "`"
 *   insn=0x00000000002C7280 string=0x00000000002C7284 "mB"
 *   insn=0x00000000002C7284 string=0x00000000002C7288 "A"
 *   insn=0x00000000002C7288 string=0x00000000002C728C "h"
 *   insn=0x00000000002C7290 string=0x00000000002C7294 "@"
 *   insn=0x00000000002C7294 string=0x00000000002C7298 ""
 *   insn=0x00000000002C7298 string=0x00000000002C729C ""
 *   insn=0x00000000002C72A0 string=0x00000000002C72A4 ""
 *   insn=0x00000000002C72A4 string=0x00000000002C72A8 ""
 *   insn=0x00000000002C72B0 string=0x00000000002C72B4 "`"
 *   insn=0x00000000002C72B4 string=0x00000000002C72B8 ""
 *   insn=0x00000000002C72B8 string=0x00000000002C72BC "A"
 *   insn=0x00000000002C72BC string=0x00000000002C72C0 "h~"
 *   insn=0x00000000002C72C4 string=0x00000000002C72C8 "@"
 *   insn=0x00000000002C72C8 string=0x00000000002C72CC ""
 *   insn=0x00000000002C72CC string=0x00000000002C72D0 ""
 *   insn=0x00000000002C72D4 string=0x00000000002C72D8 ""
 *   insn=0x00000000002C72D8 string=0x00000000002C72DC ""
 *   insn=0x00000000002C72E4 string=0x00000000002C72E8 "`z@"
 *   insn=0x00000000002C72E8 string=0x00000000002C72EC ""
 *   insn=0x00000000002C72EC string=0x00000000002C72F0 "A"
 *   insn=0x00000000002C72F0 string=0x00000000002C72F4 "hr"
 *   insn=0x00000000002C72F8 string=0x00000000002C72FC "@"
 *   insn=0x00000000002C72FC string=0x00000000002C7300 ""
 *   insn=0x00000000002C7300 string=0x00000000002C7304 ""
 *   insn=0x00000000002C7308 string=0x00000000002C730C ""
 *   insn=0x00000000002C730C string=0x00000000002C7310 ""
 *   insn=0x00000000002C7318 string=0x00000000002C731C "`n@"
 *   insn=0x00000000002C731C string=0x00000000002C7320 ""
 *   insn=0x00000000002C7320 string=0x00000000002C7324 "A"
 *   insn=0x00000000002C7324 string=0x00000000002C7328 "hf"
 *   insn=0x00000000002C732C string=0x00000000002C7330 "@"
 *   insn=0x00000000002C7330 string=0x00000000002C7334 ""
 *   insn=0x00000000002C7334 string=0x00000000002C7338 ""
 *   insn=0x00000000002C733C string=0x00000000002C7340 ""
 *   insn=0x00000000002C7340 string=0x00000000002C7344 ""
 *   insn=0x00000000002C734C string=0x00000000002C7350 "`R@"
 *   insn=0x00000000002C7350 string=0x00000000002C7354 ""
 *   insn=0x00000000002C7354 string=0x00000000002C7358 "A"
 *   insn=0x00000000002C7358 string=0x00000000002C735C "hJ"
 *   insn=0x00000000002C7360 string=0x00000000002C7364 "@"
 *   insn=0x00000000002C7364 string=0x00000000002C7368 ""
 *   insn=0x00000000002C7368 string=0x00000000002C736C ""
 *   insn=0x00000000002C7370 string=0x00000000002C7374 ""
 *   insn=0x00000000002C7374 string=0x00000000002C7378 ""
 *   insn=0x00000000002C7380 string=0x00000000002C7384 "`F@"
 *   insn=0x00000000002C7384 string=0x00000000002C7388 "i@"
 *   insn=0x00000000002C7388 string=0x00000000002C738C "A"
 *   insn=0x00000000002C738C string=0x00000000002C7390 "h>"
 *   insn=0x00000000002C7394 string=0x00000000002C7398 "@"
 *   insn=0x00000000002C7398 string=0x00000000002C739C ""
 *   insn=0x00000000002C739C string=0x00000000002C73A0 ""
 *   insn=0x00000000002C73A4 string=0x00000000002C73A8 ""
 *   insn=0x00000000002C73A8 string=0x00000000002C73AC ""
 *   insn=0x00000000002C73B4 string=0x00000000002C73B8 "F"
 *   insn=0x00000000002C73BC string=0x00000000002C73C0 "A"
 *   insn=0x00000000002C73D8 string=0x00000000001FBBD0 "0'"
 *   insn=0x00000000002C73F8 string=0x00000000002C73FC "2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponComponent::HandleMessage(
        Caver::SwingableWeaponComponent *this,
        int a2,
        _QWORD *a3)
{
  __int64 result; // x0
  int v6; // w21
  __int64 v7; // x8
  __int64 v8; // x20
  __int64 v9; // x22
  Caver::SceneObject *v10; // x21
  int v11; // w8
  __int64 v12; // x0
  int v13; // w8
  void *v14; // x0
  __int64 v15; // x21
  float v16; // w8
  int v17; // w9
  _DWORD *v18; // x8
  __int64 v19; // x0
  Caver::SwingableWeaponControllerComponent *v20; // x0
  Caver::SoundLibrary *v21; // x0
  __int64 v22; // x0
  int v23; // w8
  __int64 v24; // x0
  int v25; // w8
  void *v26; // x0
  unsigned int *v27; // x8
  int v28; // w9
  Caver::SoundEffectComponent *v29; // x0
  __int64 v30; // x0
  int v31; // w8
  __int64 v32; // x8
  int v33; // w22
  __int64 v34; // kr00_8
  __int64 v35; // x8
  float v36; // s0
  float v37; // s5
  Caver::CollisionShape *v38; // x0
  Caver::CollisionShape *v39; // x21
  float v40; // s0
  __int64 v41; // x8
  float v42; // s1
  float v43; // s3
  __int64 v44; // x8
  _DWORD *v45; // x0
  _DWORD *v46; // x8
  float v47; // s0
  float v48; // s1
  float v49; // s2
  float v50; // s3
  float v51; // s4
  float v52; // s5
  float v53; // s7
  float v54; // s2
  float v55; // s1
  float v56; // s0
  float v57; // s0
  float *v58; // x8
  float v59; // s1
  float v60; // s0
  float v61; // s2
  int v62; // w8
  unsigned int *v63; // x8
  int v64; // w9
  _DWORD *v65; // [xsp+28h] [xbp-A8h]
  __int128 v66; // [xsp+30h] [xbp-A0h] BYREF
  __int64 v67; // [xsp+40h] [xbp-90h]
  __int64 v68; // [xsp+48h] [xbp-88h] BYREF
  float v69; // [xsp+50h] [xbp-80h]
  float v70; // [xsp+54h] [xbp-7Ch]
  __int64 v71; // [xsp+58h] [xbp-78h] BYREF
  __int64 v72; // [xsp+60h] [xbp-70h] BYREF
  float v73[2]; // [xsp+68h] [xbp-68h] BYREF
  __int64 v74; // [xsp+70h] [xbp-60h]
  _QWORD v75[3]; // [xsp+78h] [xbp-58h] BYREF

  v75[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 != 7 )
  {
    if ( a2 != 13 || *((_BYTE *)this + 452) )
      return 0;
    v10 = (Caver::SceneObject *)operator new(0x128u);
    Caver::SceneObject::SceneObject(v10);
    v11 = *((_DWORD *)v10 + 2);
    v75[0] = v10;
    *((_DWORD *)v10 + 2) = v11 + 1;
    sub_566BB8((int)&v66, "particle_blast");
    Caver::ObjectLibrary::TemplateForName();
    Caver::SceneObject::InitWithTemplate(v10);
    v12 = v68;
    if ( v68 )
    {
      v13 = *(_DWORD *)(v68 + 8) - 1;
      *(_DWORD *)(v68 + 8) = v13;
      if ( !v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    }
    v14 = (void *)(v66 - 24);
    if ( (__int64 *)(v66 - 24) != &qword_6FD2E0 )
    {
      v63 = (unsigned int *)(v66 - 8);
      if ( &pthread_create )
      {
        do
          v64 = __ldaxr(v63);
        while ( __stlxr(v64 - 1, v63) );
      }
      else
      {
        v64 = (*v63)--;
      }
      if ( v64 <= 0 )
        operator delete(v14);
    }
    v15 = v75[0];
    v16 = *(float *)(*((_QWORD *)this + 5) + 120LL);
    v68 = a3[2];
    v69 = v16;
    Caver::Vector2::Vector2((Caver::Vector2 *)&v66, (const Caver::Vector3 *)&v68);
    if ( fabsf(*(float *)&v66 - *(float *)(v15 + 112)) <= 0.0001 )
    {
      v18 = (_DWORD *)(v15 + 116);
      if ( fabsf(*((float *)&v66 + 1) - *(float *)(v15 + 116)) <= 0.0001 )
      {
LABEL_25:
        *(float *)(v15 + 120) = v69;
        (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(*((_QWORD *)this + 5) + 32LL) + 40LL))(
          *(_QWORD *)(*((_QWORD *)this + 5) + 32LL),
          v75);
        v20 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)this + 14);
        if ( v20 && !*((_BYTE *)a3 + 37) )
          v20 = (Caver::SwingableWeaponControllerComponent *)Caver::SwingableWeaponControllerComponent::KnockBack(v20);
        if ( *((_BYTE *)a3 + 36) )
        {
          v21 = (Caver::SoundLibrary *)Caver::AudioSystem::sharedSystem(v20);
          Caver::SoundLibrary::sharedLibrary(v21);
          sub_566BB8((int)&v66, "shield_block");
          Caver::SoundLibrary::EffectForName();
          Caver::AudioSystem::PlaySoundEffect();
          v22 = v74;
          if ( v74 )
          {
            v23 = *(_DWORD *)(v74 + 8) - 1;
            *(_DWORD *)(v74 + 8) = v23;
            if ( !v23 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
          }
          v24 = v68;
          if ( v68 )
          {
            v25 = *(_DWORD *)(v68 + 8) - 1;
            *(_DWORD *)(v68 + 8) = v25;
            if ( !v25 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
          }
          v26 = (void *)(v66 - 24);
          if ( (__int64 *)(v66 - 24) != &qword_6FD2E0 )
          {
            v27 = (unsigned int *)(v66 - 8);
            if ( &pthread_create )
            {
              do
                v28 = __ldaxr(v27);
              while ( __stlxr(v28 - 1, v27) );
            }
            else
            {
              v28 = (*v27)--;
            }
            if ( v28 <= 0 )
              operator delete(v26);
          }
        }
        else
        {
          v29 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 42);
          if ( v29
            || (Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 320), this),
                (v29 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 42)) != 0) )
          {
            Caver::SoundEffectComponent::Play(v29);
          }
        }
        *((_BYTE *)this + 452) = 1;
        v30 = v75[0];
        if ( v75[0] )
        {
          v31 = *(_DWORD *)(v75[0] + 8LL) - 1;
          *(_DWORD *)(v75[0] + 8LL) = v31;
          if ( !v31 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
        }
        return 0;
      }
      v17 = DWORD1(v66);
    }
    else
    {
      v17 = DWORD1(v66);
      v18 = (_DWORD *)(v15 + 116);
    }
    *(_DWORD *)(v15 + 112) = v66;
    *v18 = v17;
    if ( !*(_BYTE *)(v15 + 180) )
    {
      Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v15);
      *(_BYTE *)(v15 + 180) = 1;
    }
    goto LABEL_25;
  }
  v6 = *((unsigned __int8 *)a3 + 52);
  v7 = *((_QWORD *)this + 20);
  v9 = *a3;
  v8 = a3[1];
  if ( v7 )
  {
    if ( v9 != v7 )
      return 1;
  }
  else
  {
    Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 144), this);
    if ( v9 != *((_QWORD *)this + 20) )
      return 1;
  }
  if ( *(_DWORD *)(v8 + 384) == 6 || (result = 1, v6) && *(_BYTE *)(v8 + 380) )
  {
    v19 = Caver::SceneObject::ComponentWithInterface(
            *(Caver::SceneObject **)(v8 + 40),
            (__int64)Caver::HealthComponent::Interface);
    if ( !*((_BYTE *)this + 452) )
    {
      v32 = *((_QWORD *)this + 44);
      if ( v32 )
      {
        if ( *(_BYTE *)(v32 + 188) && (!v19 || *(_DWORD *)(v32 + 180) != *(_DWORD *)(v19 + 136)) )
        {
          v33 = *((_DWORD *)this + 96);
          Caver::Vector2::Vector2((Caver::Vector2 *)v73, (Caver::SwingableWeaponComponent *)((char *)this + 400));
          if ( fabsf(v73[0]) <= 0.001 && fabsf(v73[1]) <= 0.001 )
          {
            v34 = COERCE_UNSIGNED_INT((float)v33);
          }
          else
          {
            Caver::Vector2::Vector2((Caver::Vector2 *)&v72, (Caver::SwingableWeaponComponent *)((char *)this + 400));
            v68 = v72;
            Caver::Vector2::Normalize((Caver::Vector2 *)&v68);
            v34 = v68;
          }
          v35 = *((_QWORD *)this + 5);
          v36 = *((float *)this + 110);
          v37 = *(float *)(v35 + 116);
          LODWORD(v68) = *(_DWORD *)(v35 + 112);
          *((float *)&v68 + 1) = v37;
          *(float *)&v71 = *(float *)&v68 + (float)(*(float *)&v34 * (float)(v36 * 0.5));
          *((float *)&v71 + 1) = v37 + (float)(*((float *)&v34 + 1) * (float)(v36 * 0.5));
          v69 = (float)((float)(*(float *)&v34 * 10.0) * v36) + *(float *)&v68;
          v70 = (float)((float)(*((float *)&v34 + 1) * 10.0) * v36) + v37;
          v38 = (Caver::CollisionShape *)Caver::CollisionShapeComponent::collisionShape((Caver::CollisionShapeComponent *)v8);
          v39 = v38;
          if ( *(_DWORD *)(v8 + 384) == 6
            || (Caver::CollisionShape::IntersectsWithLineSegment(
                  v38,
                  (const Caver::LineSegment *)&v68,
                  (Caver::Vector2 *)&v71,
                  0,
                  0)
              & 1) == 0 )
          {
            Caver::CollisionShape::NearestPointInShape(
              (__int64 *)&v66,
              v39,
              (const Caver::Vector2 *)(*((_QWORD *)this + 5) + 112LL));
            v40 = *(float *)&v66;
            v71 = v66;
          }
          else
          {
            v40 = *(float *)&v71;
          }
          v67 = v34;
          v41 = *((_QWORD *)this + 5);
          v42 = *((float *)&v71 + 1);
          v43 = *((float *)&v71 + 1) - *(float *)(v41 + 116);
          if ( fabsf(v40 - *(float *)(v41 + 112)) > 0.01 || fabsf(v43) > 0.01 )
          {
            *(float *)&v66 = v40 - *(float *)(v41 + 112);
            *((float *)&v66 + 1) = v43;
            Caver::Vector2::Normalize((Caver::Vector2 *)&v66);
            v42 = *((float *)&v71 + 1);
            v40 = *(float *)&v71;
            v67 = v66;
          }
          *(float *)&v71 = v40 + (float)((float)*((int *)this + 96) * 15.0);
          *((float *)&v71 + 1) = v42 + 0.0;
          if ( *(_DWORD *)(v8 + 384) == 6 )
          {
            v44 = *(_QWORD *)(v8 + 40);
            v75[0] = v44;
            if ( v44 )
              ++*(_DWORD *)(v44 + 8);
            v66 = 0u;
            Caver::DamageComponent::AddPotentialImpact();
            v45 = (_DWORD *)v75[0];
            if ( !v75[0] )
              return 1;
          }
          else
          {
            if ( !*(_BYTE *)(v8 + 380) )
              return 1;
            v46 = *(_DWORD **)(v8 + 40);
            v65 = v46;
            if ( v46 )
              ++v46[2];
            v47 = *((float *)this + 101);
            v48 = *((float *)this + 99);
            v49 = *((float *)this + 102);
            v50 = *((float *)this + 98);
            v51 = *((float *)this + 100);
            v52 = *((float *)this + 97);
            v53 = v49 * v52;
            v54 = (float)(v47 * v48) - (float)(v49 * v50);
            v55 = v53 - (float)(v48 * v51);
            v56 = (float)(v50 * v51) - (float)(v47 * v52);
            if ( (float)((float)(v56 * v56) + (float)((float)(v54 * v54) + (float)(v55 * v55))) >= 0.00001 )
            {
              *(float *)v75 = v54;
              *(_QWORD *)((char *)v75 + 4) = __PAIR64__(LODWORD(v56), LODWORD(v55));
              Caver::Vector3::Normalize((Caver::Vector3 *)v75);
              v58 = (float *)*((_QWORD *)this + 5);
              v59 = v58[28];
              v61 = v58[29];
              v60 = v58[30];
              LODWORD(v66) = v75[0];
              *(_QWORD *)((char *)&v66 + 4) = *(_QWORD *)((char *)v75 + 4);
              v57 = (float)(v60 * *(float *)&v75[1])
                  + (float)((float)(v59 * *(float *)v75) + (float)(v61 * *((float *)v75 + 1)));
            }
            else
            {
              *(_QWORD *)&v66 = 0;
              DWORD2(v66) = 0;
              v57 = 0.0;
            }
            *((float *)&v66 + 3) = v57;
            Caver::DamageComponent::AddPotentialImpact();
            v45 = v65;
            if ( !v65 )
              return 1;
          }
          v62 = v45[2] - 1;
          v45[2] = v62;
          if ( !v62 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v45 + 8LL))(v45);
        }
      }
    }
    return 1;
  }
  return result;
}

