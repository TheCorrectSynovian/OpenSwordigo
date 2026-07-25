/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B6F2C
 * Mangled: _ZN5Caver19GroundMeshComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x00000000002B6EF4  Caver::GroundMeshComponent::~GroundMeshComponent()
 *
 * Callees: 32
 *   0x00000000001F39E0  Caver::Mesh::Mesh(void)
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4870  Caver::Proto::Mesh::Mesh(void)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F7860  Caver::Proto::GroundMeshComponent::default_instance(void)
 *   0x00000000001F9100  Caver::GroundMeshComponent::AddSurfaceMesh(boost::shared_ptr<Caver::Mesh> const&)
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FA240  Caver::Mesh::LoadFromProtobufMessage(Caver::Proto::Mesh const&)
 *   0x00000000001FA520  Caver::GroundMeshComponent::AddFrontMesh(boost::shared_ptr<Caver::Mesh> const&)
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FAB90  boost::detail::shared_count::shared_count<Caver::Mesh>(Caver::Mesh *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FB070  Caver::Proto::Rectangle::Rectangle(void)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000200EA0  Caver::MeshInstance::InstanceWithMesh(boost::shared_ptr<Caver::Mesh> const&,bool)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000202D10  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *   0x0000000000203730  std::vector<boost::shared_ptr<Caver::MeshInstance>,std::allocator<boost::shared_ptr<Caver::MeshInstance>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MeshInstance>*,std::vector<boost::shared_ptr<Caver::MeshInstance>,std::allocator<boost::shared_ptr<Caver::MeshInstance>>>>,boost::shared_ptr<Caver::MeshInstance> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002B78CC  Caver::GroundMeshComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 205
 *   insn=0x00000000002B6F40 string=0x00000000002B6F44 "W"
 *   insn=0x00000000002B6F54 string=0x00000000002B6F58 ":"
 *   insn=0x00000000002B6F58 string=0x00000000002B6F5C "h!"
 *   insn=0x00000000002B6F58 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002B6F5C string=0x00000000002B6F60 "B"
 *   insn=0x00000000002B6F94 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002B6F9C string=0x00000000001F39E0 "P'"
 *   insn=0x00000000002B6FAC string=0x00000000001FAB90 "0'"
 *   insn=0x00000000002B6FB8 string=0x00000000002B6FBC "e."
 *   insn=0x00000000002B6FCC string=0x00000000001FA240 "0'"
 *   insn=0x00000000002B6FD4 string=0x00000000002B6FD8 "J"
 *   insn=0x00000000002B6FD8 string=0x00000000001F9100 "0'"
 *   insn=0x00000000002B6FDC string=0x00000000002B6FE0 "6"
 *   insn=0x00000000002B6FE4 string=0x00000000002B6FE8 ""
 *   insn=0x00000000002B6FF8 string=0x00000000002B6FFC "\t@"
 *   insn=0x00000000002B7004 string=0x00000000002B7008 ""
 *   insn=0x00000000002B7018 string=0x00000000002B701C "@"
 *   insn=0x00000000002B702C string=0x00000000002B7030 ""
 *   insn=0x00000000002B703C string=0x00000000002B70F0 "h!"
 *   insn=0x00000000002B704C string=0x00000000002B7050 "d"
 *   insn=0x00000000002B7054 string=0x00000000002B7058 "b"
 *   insn=0x00000000002B7074 string=0x00000000002B7078 "6."
 *   insn=0x00000000002B7084 string=0x00000000002B7088 "n"
 *   insn=0x00000000002B7090 string=0x00000000002B7094 "#"
 *   insn=0x00000000002B7094 string=0x00000000001FA520 "0'"
 *   insn=0x00000000002B7098 string=0x00000000002B709C "6"
 *   insn=0x00000000002B70A0 string=0x00000000002B70A4 ""
 *   insn=0x00000000002B70B4 string=0x00000000002B70B8 "\t@"
 *   insn=0x00000000002B70C0 string=0x00000000002B70C4 ""
 *   insn=0x00000000002B70D4 string=0x00000000002B70D8 "@"
 *   insn=0x00000000002B70E8 string=0x00000000002B70EC ""
 *   insn=0x00000000002B70F4 string=0x00000000002B70F8 ""
 *   insn=0x00000000002B70F8 string=0x00000000002B70FC "?"
 *   insn=0x00000000002B70FC string=0x00000000002B7100 ""
 *   insn=0x00000000002B7100 string=0x00000000002B7104 "\t"
 *   insn=0x00000000002B7104 string=0x00000000002B7108 ")-@"
 *   insn=0x00000000002B7108 string=0x00000000002B710C "*"
 *   insn=0x00000000002B710C string=0x00000000002B7110 ")AA"
 *   insn=0x00000000002B7110 string=0x00000000002B7114 "j&\n"
 *   insn=0x00000000002B7118 string=0x00000000002B711C ")"
 *   insn=0x00000000002B7120 string=0x00000000002B7124 "?"
 *   insn=0x00000000002B7124 string=0x00000000002B7128 ""
 *   insn=0x00000000002B7134 string=0x00000000001FA090 "0'"
 *   insn=0x00000000002B7138 string=0x00000000002B713C "`."
 *   insn=0x00000000002B7140 string=0x00000000002B7144 "h"
 *   insn=0x00000000002B7154 string=0x00000000002B7170 "X"
 *   insn=0x00000000002B7170 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B717C string=0x00000000002B7180 "T"
 *   insn=0x00000000002B7184 string=0x00000000002B7188 ""
 *   insn=0x00000000002B7194 string=0x00000000002B7198 "\t@"
 *   insn=0x00000000002B71A4 string=0x00000000002B71A8 ""
 *   insn=0x00000000002B71B4 string=0x00000000002B71B8 "@"
 *   insn=0x00000000002B71CC string=0x00000000002B71D0 "8"
 *   insn=0x00000000002B71D0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002B71E0 string=0x00000000002B71E4 "4"
 *   insn=0x00000000002B71E8 string=0x00000000002B71EC ""
 *   insn=0x00000000002B71F8 string=0x00000000002B71FC "\t@"
 *   insn=0x00000000002B7208 string=0x00000000002B720C ""
 *   insn=0x00000000002B7218 string=0x00000000002B721C "@"
 *   insn=0x00000000002B722C string=0x00000000002B7230 "G\"
 *   insn=0x00000000002B7244 string=0x00000000002B7248 "T"
 *   insn=0x00000000002B7248 string=0x00000000002B724C "u!"
 *   insn=0x00000000002B729C string=0x00000000002B72A0 "`"
 *   insn=0x00000000002B72A0 string=0x00000000002B72A4 "`2"
 *   insn=0x00000000002B72C0 string=0x00000000002B72C4 "h!"
 *   insn=0x00000000002B72C4 string=0x00000000002B72C8 "aE"
 *   insn=0x00000000002B72D0 string=0x00000000002B72D4 "A"
 *   insn=0x00000000002B72D4 string=0x00000000002B72D8 ""
 *   insn=0x00000000002B72E8 string=0x00000000002B72EC "`z"
 *   insn=0x00000000002B732C string=0x00000000001F45E0 "P'"
 *   insn=0x00000000002B7338 string=0x00000000002B733C "hr@"
 *   insn=0x00000000002B7338 string=0x00000000001FD590 "0'"
 *   insn=0x00000000002B7348 string=0x00000000002B734C "i!"
 *   insn=0x00000000002B7348 string=0x00000000002B737C "`n@"
 *   insn=0x00000000002B734C string=0x00000000002B7350 ")=G"
 *   insn=0x00000000002B7350 string=0x00000000002B7354 "!"
 *   insn=0x00000000002B7358 string=0x00000000002B735C "\t"
 *   insn=0x00000000002B7358 string=0x00000000002B73B4 "\t"
 *   insn=0x00000000002B735C string=0x00000000002B7360 "*"
 *   insn=0x00000000002B7360 string=0x00000000002B7364 "\n"
 *   insn=0x00000000002B7368 string=0x00000000002B736C "?"
 *   insn=0x00000000002B736C string=0x00000000002B7370 "l"
 *   insn=0x00000000002B7374 string=0x00000000002B7378 ""
 *   insn=0x00000000002B7380 string=0x00000000002B7384 "@"
 *   insn=0x00000000002B7380 string=0x00000000002B73A0 "`*@"
 *   insn=0x00000000002B7384 string=0x00000000002B7388 ""
 *   insn=0x00000000002B7388 string=0x00000000002B738C ""
 *   insn=0x00000000002B7390 string=0x00000000002B7394 ""
 *   insn=0x00000000002B7394 string=0x00000000002B7398 ""
 *   insn=0x00000000002B73A0 string=0x00000000002B73A4 "@"
 *   insn=0x00000000002B73A8 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002B73AC string=0x00000000002B73B0 "E)"
 *   insn=0x00000000002B73B4 string=0x00000000002B73B8 "*"
 *   insn=0x00000000002B73B8 string=0x00000000002B73BC "\n"
 *   insn=0x00000000002B73BC string=0x00000000002B73C0 "?"
 *   insn=0x00000000002B73E0 string=0x00000000002B73E4 "T"
 *   insn=0x00000000002B73F4 string=0x00000000002B73F8 "("
 *   insn=0x00000000002B73F8 string=0x00000000002B73FC "H"
 *   insn=0x00000000002B740C string=0x00000000002B7410 "a"
 *   insn=0x00000000002B7410 string=0x00000000002B7414 "?"
 *   insn=0x00000000002B7418 string=0x00000000002B7450 "`"
 *   insn=0x00000000002B741C string=0x00000000002B7420 "("
 *   insn=0x00000000002B7424 string=0x00000000002B7428 "("
 *   insn=0x00000000002B742C string=0x00000000002B7430 "\t"
 *   insn=0x00000000002B742C string=0x00000000002B743C "(@"
 *   insn=0x00000000002B7430 string=0x00000000002B7434 ")"
 *   insn=0x00000000002B7434 string=0x00000000002B7438 "\t"
 *   insn=0x00000000002B743C string=0x00000000002B7440 "h>"
 *   insn=0x00000000002B7448 string=0x00000000002B7464 "h"
 *   insn=0x00000000002B745C string=0x00000000002B7460 "3"
 *   insn=0x00000000002B7464 string=0x00000000002B7468 ""
 *   insn=0x00000000002B7468 string=0x00000000002B746C "h"
 *   insn=0x00000000002B7470 string=0x00000000002B7474 "h"
 *   insn=0x00000000002B7478 string=0x00000000002B747C "\t@"
 *   insn=0x00000000002B7480 string=0x00000000002B7484 "h\n@"
 *   insn=0x00000000002B7484 string=0x00000000002B7488 ""
 *   insn=0x00000000002B7488 string=0x00000000002B748C "h\n"
 *   insn=0x00000000002B7490 string=0x00000000002B7494 "h"
 *   insn=0x00000000002B7498 string=0x00000000002B749C "@"
 *   insn=0x00000000002B74CC string=0x00000000002B74D0 "4"
 *   insn=0x00000000002B74D4 string=0x00000000002B74D8 ""
 *   insn=0x00000000002B74E4 string=0x00000000002B74E8 "\t@"
 *   insn=0x00000000002B74F4 string=0x00000000002B74F8 ""
 *   insn=0x00000000002B7504 string=0x00000000002B7508 "@"
 *   insn=0x00000000002B752C string=0x00000000002B7530 "T"
 *   insn=0x00000000002B7540 string=0x00000000002B7544 "("
 *   insn=0x00000000002B7544 string=0x00000000002B7548 "H"
 *   insn=0x00000000002B7554 string=0x00000000002B7558 "R&"
 *   insn=0x00000000002B7558 string=0x00000000002B755C "a"I"
 *   insn=0x00000000002B755C string=0x00000000002B7560 "?"
 *   insn=0x00000000002B7564 string=0x00000000002B759C "`""
 *   insn=0x00000000002B7568 string=0x00000000002B756C "("
 *   insn=0x00000000002B7570 string=0x00000000002B7574 "("
 *   insn=0x00000000002B7578 string=0x00000000002B757C "\t"
 *   insn=0x00000000002B7578 string=0x00000000002B7588 "(@"
 *   insn=0x00000000002B757C string=0x00000000002B7580 ")"
 *   insn=0x00000000002B7580 string=0x00000000002B7584 "\t"
 *   insn=0x00000000002B7588 string=0x00000000002B758C "hJ"
 *   insn=0x00000000002B7594 string=0x00000000002B75B0 "h"
 *   insn=0x00000000002B75A0 string=0x00000000002B75A4 "c0"
 *   insn=0x00000000002B75A8 string=0x00000000002B75AC "3"
 *   insn=0x00000000002B75B0 string=0x00000000002B75B4 ""
 *   insn=0x00000000002B75B4 string=0x00000000002B75B8 "h"
 *   insn=0x00000000002B75BC string=0x00000000002B75C0 "h"
 *   insn=0x00000000002B75C4 string=0x00000000002B75C8 "\t@"
 *   insn=0x00000000002B75CC string=0x00000000002B75D0 "h\n@"
 *   insn=0x00000000002B75D0 string=0x00000000002B75D4 ""
 *   insn=0x00000000002B75D4 string=0x00000000002B75D8 "h\n"
 *   insn=0x00000000002B75DC string=0x00000000002B75E0 "h"
 *   insn=0x00000000002B75E4 string=0x00000000002B75E8 "@"
 *   insn=0x00000000002B75FC string=0x00000000002B7610 "0"
 *   insn=0x00000000002B7618 string=0x00000000002B761C "4"
 *   insn=0x00000000002B7620 string=0x00000000002B7624 ""
 *   insn=0x00000000002B7630 string=0x00000000002B7634 "\t@"
 *   insn=0x00000000002B7640 string=0x00000000002B7644 ""
 *   insn=0x00000000002B7650 string=0x00000000002B7654 "@"
 *   insn=0x00000000002B7664 string=0x00000000002B7668 "9["
 *   insn=0x00000000002B7688 string=0x00000000002B768C "%"
 *   insn=0x00000000002B768C string=0x00000000002B7690 "h!"
 *   insn=0x00000000002B7690 string=0x00000000002B7694 "B"
 *   insn=0x00000000002B769C string=0x00000000002B76A0 "p"
 *   insn=0x00000000002B76A0 string=0x00000000001F7860 "0'"
 *   insn=0x00000000002B76A4 string=0x00000000002B76A8 "b"
 *   insn=0x00000000002B76B8 string=0x00000000002B76BC "xfG"
 *   insn=0x00000000002B76B8 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002B76C8 string=0x00000000002B775C "x"
 *   insn=0x00000000002B76CC string=0x00000000002B76D0 "\n"
 *   insn=0x00000000002B76D4 string=0x00000000002B76D8 "V"
 *   insn=0x00000000002B76D8 string=0x00000000002B76DC ")}@"
 *   insn=0x00000000002B76DC string=0x00000000002B76E0 "?"
 *   insn=0x00000000002B76E8 string=0x00000000002B76EC "*"
 *   insn=0x00000000002B7704 string=0x00000000002B7718 ""
 *   insn=0x00000000002B7710 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002B7728 string=0x00000000002B772C "Q"
 *   insn=0x00000000002B772C string=0x00000000001F4870 "P'"
 *   insn=0x00000000002B7734 string=0x00000000002B7738 "\n"
 *   insn=0x00000000002B773C string=0x00000000002B7740 "7y("
 *   insn=0x00000000002B7748 string=0x00000000002B774C "q-"
 *   insn=0x00000000002B7750 string=0x00000000002B7754 "?"
 *   insn=0x00000000002B7768 string=0x00000000002B776C "\n"
 *   insn=0x00000000002B7770 string=0x00000000002B7774 "V"
 *   insn=0x00000000002B7774 string=0x00000000002B7778 ")}@"
 *   insn=0x00000000002B7778 string=0x00000000002B777C "?"
 *   insn=0x00000000002B7784 string=0x00000000002B7788 "*"
 *   insn=0x00000000002B77A0 string=0x00000000002B77B4 ""
 *   insn=0x00000000002B77A8 string=0x00000000002B77AC "]"
 *   insn=0x00000000002B77C4 string=0x00000000002B77C8 "*"
 *   insn=0x00000000002B77D0 string=0x00000000002B77D4 "\n"
 *   insn=0x00000000002B77D8 string=0x00000000002B77DC "7y("
 *   insn=0x00000000002B77E4 string=0x00000000002B77E8 "J-"
 *   insn=0x00000000002B77EC string=0x00000000002B77F0 "?"
 *   insn=0x00000000002B77FC string=0x00000000002B7800 ""
 *   insn=0x00000000002B7808 string=0x00000000002B7820 "hR@"
 *   insn=0x00000000002B780C string=0x00000000002B7810 "t"
 *   insn=0x00000000002B7818 string=0x00000000001FB070 "0'"
 *   insn=0x00000000002B7828 string=0x00000000002B782C "hV@"
 *   insn=0x00000000002B782C string=0x00000000002B7830 ")"
 *   insn=0x00000000002B7840 string=0x00000000002B7844 ""
 *   insn=0x00000000002B784C string=0x00000000002B7864 "`"
 *   insn=0x00000000002B7850 string=0x00000000002B7854 "c"
 *   insn=0x00000000002B785C string=0x00000000001F3F20 "P'"
 *   insn=0x00000000002B7868 string=0x00000000002B786C "*"
 *   insn=0x00000000002B786C string=0x00000000002B7870 "h"
 *   insn=0x00000000002B7880 string=0x00000000002B7884 ""
 *   insn=0x00000000002B78B0 string=0x00000000002B78C0 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundMeshComponent::LoadFromProtobufMessage(
        Caver::GroundMeshComponent *this,
        const Caver::Proto::Component *a2)
{
  const Caver::Proto::FloatColor *v4; // x1
  __int64 Message; // x20
  __int64 v6; // x24
  Caver::Mesh *v7; // x22
  Caver::Mesh *v8; // x22
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x24
  Caver::Mesh *v12; // x22
  Caver::Mesh *v13; // x22
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x9
  __int64 v18; // x9
  __int64 v19; // x10
  __int64 v20; // x9
  Caver::Mesh *v21[2]; // [xsp+118h] [xbp-48h] BYREF
  __int64 v22; // [xsp+128h] [xbp-38h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::GroundMeshComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9370);
  if ( *(int *)(Message + 104) >= 1 )
  {
    v6 = 0;
    do
    {
      v7 = (Caver::Mesh *)operator new(0x160u);
      Caver::Mesh::Mesh(v7);
      v21[0] = v7;
      boost::detail::shared_count::shared_count<Caver::Mesh>();
      boost::detail::sp_enable_shared_from_this();
      Caver::Mesh::LoadFromProtobufMessage(v7, *(const Caver::Proto::Mesh **)(*(_QWORD *)(Message + 96) + 8 * v6));
      Caver::GroundMeshComponent::AddSurfaceMesh();
      v8 = v21[1];
      if ( v21[1] )
      {
        v9 = *((_QWORD *)v21[1] + 1) - 1LL;
        *((_QWORD *)v21[1] + 1) = v9;
        if ( !v9 )
        {
          (*(void (__fastcall **)(Caver::Mesh *))(*(_QWORD *)v8 + 16LL))(v8);
          v10 = *((_QWORD *)v8 + 2) - 1LL;
          *((_QWORD *)v8 + 2) = v10;
          if ( !v10 )
            (*(void (__fastcall **)(Caver::Mesh *))(*(_QWORD *)v8 + 24LL))(v8);
        }
      }
      ++v6;
    }
    while ( v6 < *(int *)(Message + 104) );
  }
  if ( *(int *)(Message + 160) >= 1 )
  {
    v11 = 0;
    do
    {
      v12 = (Caver::Mesh *)operator new(0x160u);
      Caver::Mesh::Mesh(v12);
      v21[0] = v12;
      boost::detail::shared_count::shared_count<Caver::Mesh>();
      boost::detail::sp_enable_shared_from_this();
      Caver::Mesh::LoadFromProtobufMessage(v12, *(const Caver::Proto::Mesh **)(*(_QWORD *)(Message + 152) + 8 * v11));
      Caver::GroundMeshComponent::AddFrontMesh();
      v13 = v21[1];
      if ( v21[1] )
      {
        v14 = *((_QWORD *)v21[1] + 1) - 1LL;
        *((_QWORD *)v21[1] + 1) = v14;
        if ( !v14 )
        {
          (*(void (__fastcall **)(Caver::Mesh *))(*(_QWORD *)v13 + 16LL))(v13);
          v15 = *((_QWORD *)v13 + 2) - 1LL;
          *((_QWORD *)v13 + 2) = v15;
          if ( !v15 )
            (*(void (__fastcall **)(Caver::Mesh *))(*(_QWORD *)v13 + 24LL))(v13);
        }
      }
      ++v11;
    }
    while ( v11 < *(int *)(Message + 160) );
  }
  v16 = Caver::Proto::GroundMeshComponent::default_instance_;
  if ( *(_QWORD *)(Message + 88) )
    v17 = Message;
  else
    v17 = Caver::Proto::GroundMeshComponent::default_instance_;
  v18 = *(_QWORD *)(v17 + 88);
  v19 = *(_QWORD *)(v18 + 12);
  v20 = *(_QWORD *)(v18 + 20);
  *((_QWORD *)this + 20) = v19;
  *((_QWORD *)this + 21) = v20;
  if ( (*(_BYTE *)(Message + 220) & 0x40) != 0 )
  {
    if ( *(_QWORD *)(Message + 208) )
      v16 = Message;
    Caver::FloatColorFromProtobufMessage((__int64 *)v21, *(Caver **)(v16 + 208), v4);
    *((_OWORD *)this + 11) = *(_OWORD *)v21;
  }
  *((_BYTE *)this + 192) = *(_BYTE *)(Message + 216);
}

