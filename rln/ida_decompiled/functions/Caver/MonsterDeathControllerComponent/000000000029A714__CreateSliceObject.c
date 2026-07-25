/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029A714
 * Mangled: _ZN5Caver31MonsterDeathControllerComponent17CreateSliceObjectERKN5boost10shared_ptrINS_5ModelEEERKNS_7Vector3E
 * Demangled: Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x00000000001F7F50  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Callees: 31
 *   0x00000000001F3A50  boost::scoped_ptr<Caver::MeshClipper>::~scoped_ptr()
 *   0x00000000001F4280  Caver::MeshClipper::ClippedMesh(int)
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F4B80  Caver::PhysicsObjectState::setVelocity(Caver::Vector2 const&)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6930  Caver::ModelComponent::WorldMatrix(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F74B0  Caver::SceneObject::WorldMatrix(void)
 *   0x00000000001F7F50  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *   0x00000000001F82A0  Caver::MeshClipper::MeshClipper(void)
 *   0x00000000001F9530  Caver::MeshClipper::ClipWithPlane(Caver::Vector4 const&)
 *   0x00000000001FA2A0  Caver::MeshClipper::InitWithMeshInstance(Caver::MeshInstance *,Caver::Matrix4 const&)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FB5B0  Caver::ModelComponent::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *   0x00000000001FE6F0  Caver::ParticleObjectComponent::ParticleObjectComponent(void)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200640  Caver::Matrix4::PreTranslate(Caver::Vector3 const&)
 *   0x0000000000201450  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000202460  Caver::ModelComponent::ModelComponent(void)
 *   0x0000000000202740  std::vector<boost::shared_ptr<Caver::Mesh>,std::allocator<boost::shared_ptr<Caver::Mesh>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Mesh>*,std::vector<boost::shared_ptr<Caver::Mesh>,std::allocator<boost::shared_ptr<Caver::Mesh>>>>,boost::shared_ptr<Caver::Mesh> const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x0000000000203AA0  boost::detail::shared_count::shared_count<Caver::Model>(Caver::Model *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *   0x000000000029B1B0  Caver::MonsterDeathControllerComponent::Prepare(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 213
 *   insn=0x000000000029A728 string=0x000000000029A72C "W"
 *   insn=0x000000000029A748 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000029A750 string=0x00000000001FAB30 "0'"
 *   insn=0x000000000029A758 string=0x000000000029A75C ""
 *   insn=0x000000000029A764 string=0x000000000029A768 "\t9@"
 *   insn=0x000000000029A768 string=0x000000000029A76C "y@"
 *   insn=0x000000000029A788 string=0x000000000029A78C "H"
 *   insn=0x000000000029A794 string=0x000000000029A798 "!"
 *   insn=0x000000000029A798 string=0x000000000029A79C "  ""
 *   insn=0x000000000029A7A8 string=0x000000000029A7AC "\t"
 *   insn=0x000000000029A7B8 string=0x000000000029A7BC "#8#"
 *   insn=0x000000000029A7BC string=0x000000000029A7C0 "c"
 *   insn=0x000000000029A7C0 string=0x000000000029A7C4 "` ""
 *   insn=0x000000000029A7C4 string=0x000000000029A7C8 "I"
 *   insn=0x000000000029A7C8 string=0x000000000029A7CC ")"
 *   insn=0x000000000029A7D0 string=0x000000000029A7D4 "\t"
 *   insn=0x000000000029A7E0 string=0x000000000029A7E4 "om"
 *   insn=0x000000000029A7E4 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000029A7FC string=0x000000000029A800 ""
 *   insn=0x000000000029A800 string=0x000000000029A804 ""
 *   insn=0x000000000029A810 string=0x000000000029A814 "sk"
 *   insn=0x000000000029A834 string=0x000000000029A838 "\t"
 *   insn=0x000000000029A838 string=0x000000000029A83C ")"
 *   insn=0x000000000029A83C string=0x000000000029A840 "\t"
 *   insn=0x000000000029A848 string=0x000000000029A84C "Y"
 *   insn=0x000000000029A84C string=0x00000000001FB5B0 "0'"
 *   insn=0x000000000029A850 string=0x000000000029A854 "4"
 *   insn=0x000000000029A858 string=0x000000000029A85C ""
 *   insn=0x000000000029A868 string=0x000000000029A86C "\t@"
 *   insn=0x000000000029A878 string=0x000000000029A87C ""
 *   insn=0x000000000029A888 string=0x000000000029A88C "@"
 *   insn=0x000000000029A89C string=0x000000000029A8A0 "@g"
 *   insn=0x000000000029A8A0 string=0x00000000001F45A0 "P'"
 *   insn=0x000000000029A8A4 string=0x000000000029A8A8 "Nk"
 *   insn=0x000000000029A8BC string=0x000000000029A8C0 "8g"
 *   insn=0x000000000029A8C8 string=0x000000000029A8CC "?"
 *   insn=0x000000000029A8E0 string=0x000000000029A8E4 "@"
 *   insn=0x000000000029A8E4 string=0x000000000029A8E8 ""
 *   insn=0x000000000029A8E8 string=0x000000000029A8EC ""
 *   insn=0x000000000029A8F0 string=0x000000000029A8F4 ""
 *   insn=0x000000000029A8F4 string=0x000000000029A8F8 ""
 *   insn=0x000000000029A914 string=0x000000000029A918 "h\n@"
 *   insn=0x000000000029A914 string=0x00000000001F4B80 "P'"
 *   insn=0x000000000029A92C string=0x000000000029A930 "@"
 *   insn=0x000000000029A930 string=0x000000000029A934 ""
 *   insn=0x000000000029A934 string=0x000000000029A938 ""
 *   insn=0x000000000029A93C string=0x000000000029A940 ""
 *   insn=0x000000000029A940 string=0x000000000029A944 ""
 *   insn=0x000000000029A958 string=0x000000000029A974 "Wn"
 *   insn=0x000000000029A974 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029A984 string=0x000000000029A9E0 "4r"
 *   insn=0x000000000029A994 string=0x000000000029A998 ""
 *   insn=0x000000000029A9A4 string=0x000000000029A9A8 "\t@"
 *   insn=0x000000000029A9B4 string=0x000000000029A9B8 ""
 *   insn=0x000000000029A9C4 string=0x000000000029A9C8 "@"
 *   insn=0x000000000029A9E0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000029A9E8 string=0x000000000029AA28 "@"
 *   insn=0x000000000029A9F8 string=0x000000000029A9FC "-r"
 *   insn=0x000000000029AA14 string=0x000000000029AA18 ""
 *   insn=0x000000000029AA28 string=0x000000000029AA2C ""
 *   insn=0x000000000029AA2C string=0x000000000029AA30 ""
 *   insn=0x000000000029AA34 string=0x000000000029AA38 ""
 *   insn=0x000000000029AA38 string=0x000000000029AA3C ""
 *   insn=0x000000000029AA48 string=0x000000000029AA4C "@"
 *   insn=0x000000000029AA6C string=0x000000000029AA70 "X"
 *   insn=0x000000000029AA70 string=0x000000000029AA74 ""
 *   insn=0x000000000029AA84 string=0x000000000029AA88 "r"
 *   insn=0x000000000029AA88 string=0x000000000029AA8C "a""
 *   insn=0x000000000029AA90 string=0x000000000029AA94 "!0D"
 *   insn=0x000000000029AAA0 string=0x000000000029AF1C ""
 *   insn=0x000000000029AAA8 string=0x000000000029AAAC "H""
 *   insn=0x000000000029AAAC string=0x000000000029AAB0 ""
 *   insn=0x000000000029AAB8 string=0x000000000029AABC " !"
 *   insn=0x000000000029AB2C string=0x000000000029AB30 "`r"
 *   insn=0x000000000029AB30 string=0x00000000001F74B0 "0'"
 *   insn=0x000000000029AB38 string=0x000000000029AB3C "}o"
 *   insn=0x000000000029AB3C string=0x00000000001F6930 "0'"
 *   insn=0x000000000029AB5C string=0x000000000029AB60 "!A!"
 *   insn=0x000000000029AB84 string=0x000000000029AB88 "A"
 *   insn=0x000000000029AB88 string=0x000000000029AB8C "B"
 *   insn=0x000000000029AB8C string=0x000000000029AB90 "!"
 *   insn=0x000000000029AB90 string=0x000000000029AB94 "#\t("
 *   insn=0x000000000029AB94 string=0x000000000029AB98 "A(!"
 *   insn=0x000000000029AB98 string=0x000000000029AB9C "!(#"
 *   insn=0x000000000029ABB4 string=0x000000000029ABB8 "("
 *   insn=0x000000000029ABB8 string=0x000000000029ABFC "U@"
 *   insn=0x000000000029ABBC string=0x000000000029ABC0 "!@"
 *   insn=0x000000000029ABD0 string=0x000000000029ABD4 "U@"
 *   insn=0x000000000029ABD4 string=0x000000000029ABD8 "u"
 *   insn=0x000000000029ABD8 string=0x000000000029ABDC "\t"
 *   insn=0x000000000029ABE4 string=0x000000000029AC58 "("
 *   insn=0x000000000029ABF4 string=0x000000000029ABF8 "("
 *   insn=0x000000000029AC04 string=0x000000000029AC08 "*"
 *   insn=0x000000000029AC0C string=0x000000000029AC10 "\n"
 *   insn=0x000000000029AC20 string=0x000000000029AC24 "\t@"
 *   insn=0x000000000029AC34 string=0x000000000029AC38 ""
 *   insn=0x000000000029AC44 string=0x000000000029AC48 "@"
 *   insn=0x000000000029AC5C string=0x000000000029AC60 "J"
 *   insn=0x000000000029AC60 string=0x000000000029AE28 "h"
 *   insn=0x000000000029AC64 string=0x000000000029AC68 "^j"
 *   insn=0x000000000029AC74 string=0x00000000001F82A0 "0'"
 *   insn=0x000000000029AC80 string=0x000000000029AC98 ""
 *   insn=0x000000000029AC84 string=0x000000000029AC88 "!@"
 *   insn=0x000000000029ACA4 string=0x000000000029ACA8 "~}"
 *   insn=0x000000000029ACA8 string=0x00000000001FA2A0 "0'"
 *   insn=0x000000000029ACB4 string=0x00000000001F9530 "0'"
 *   insn=0x000000000029ACC0 string=0x000000000029ACC4 "oe"
 *   insn=0x000000000029ACC4 string=0x00000000001F4280 "P'"
 *   insn=0x000000000029ACD0 string=0x000000000029ACD4 "ke"
 *   insn=0x000000000029ACE4 string=0x000000000029ACE8 "?"
 *   insn=0x000000000029ACEC string=0x000000000029ACF0 ")"
 *   insn=0x000000000029ACF4 string=0x000000000029ACF8 ")"
 *   insn=0x000000000029ACFC string=0x000000000029AD00 "*"
 *   insn=0x000000000029ACFC string=0x000000000029AD0C ")@"
 *   insn=0x000000000029AD00 string=0x000000000029AD04 "J"
 *   insn=0x000000000029AD04 string=0x000000000029AD08 "*"
 *   insn=0x000000000029AD0C string=0x000000000029AD10 "\t\t"
 *   insn=0x000000000029AD2C string=0x000000000029AD30 "I"
 *   insn=0x000000000029AD38 string=0x000000000029AD3C "?"
 *   insn=0x000000000029AD3C string=0x000000000029AD40 "`"
 *   insn=0x000000000029AD40 string=0x000000000029AD44 ")"
 *   insn=0x000000000029AD48 string=0x000000000029AD4C ")"
 *   insn=0x000000000029AD50 string=0x000000000029AD54 "*"
 *   insn=0x000000000029AD50 string=0x000000000029AD60 ")@"
 *   insn=0x000000000029AD54 string=0x000000000029AD58 "J"
 *   insn=0x000000000029AD58 string=0x000000000029AD5C "*"
 *   insn=0x000000000029AD60 string=0x000000000029AD64 "\t\t"
 *   insn=0x000000000029AD70 string=0x000000000029AD74 "s"
 *   insn=0x000000000029AD84 string=0x000000000029AD88 "2c"
 *   insn=0x000000000029AD88 string=0x00000000001F3A50 "P'"
 *   insn=0x000000000029AD8C string=0x000000000029AD90 "5"
 *   insn=0x000000000029AD94 string=0x000000000029AD98 ""
 *   insn=0x000000000029ADA4 string=0x000000000029ADA8 "\t@"
 *   insn=0x000000000029ADB4 string=0x000000000029ADB8 ""
 *   insn=0x000000000029ADC4 string=0x000000000029ADC8 "@"
 *   insn=0x000000000029ADD4 string=0x000000000029ADD8 "5"
 *   insn=0x000000000029ADDC string=0x000000000029ADE0 ""
 *   insn=0x000000000029ADEC string=0x000000000029ADF0 "\t@"
 *   insn=0x000000000029ADFC string=0x000000000029AE00 ""
 *   insn=0x000000000029AE0C string=0x000000000029AE10 "@"
 *   insn=0x000000000029AE20 string=0x000000000029AE24 "q"
 *   insn=0x000000000029AE50 string=0x000000000029AE54 "?t"
 *   insn=0x000000000029AE54 string=0x000000000029AE58 "h"
 *   insn=0x000000000029AE54 string=0x00000000001F7F50 "0'"
 *   insn=0x000000000029AE6C string=0x000000000029AE70 "A"
 *   insn=0x000000000029AE84 string=0x000000000029AE88 "2t"
 *   insn=0x000000000029AE8C string=0x000000000029AE90 "3"
 *   insn=0x000000000029AE90 string=0x000000000029AE94 "h"
 *   insn=0x000000000029AE94 string=0x000000000029AE98 ""
 *   insn=0x000000000029AE98 string=0x000000000029AE9C "h"
 *   insn=0x000000000029AEA0 string=0x000000000029AEA4 "h"
 *   insn=0x000000000029AEA4 string=0x000000000029AEA8 "\t@"
 *   insn=0x000000000029AEB0 string=0x000000000029AEB4 "h\n@"
 *   insn=0x000000000029AEB4 string=0x000000000029AEB8 ""
 *   insn=0x000000000029AEB8 string=0x000000000029AEBC "h\n"
 *   insn=0x000000000029AEC0 string=0x000000000029AEC4 "h"
 *   insn=0x000000000029AEC4 string=0x000000000029AEC8 "@"
 *   insn=0x000000000029AED4 string=0x000000000029AED8 "3"
 *   insn=0x000000000029AED8 string=0x000000000029AEDC "h"
 *   insn=0x000000000029AEDC string=0x000000000029AEE0 ""
 *   insn=0x000000000029AEE0 string=0x000000000029AEE4 "h"
 *   insn=0x000000000029AEE8 string=0x000000000029AEEC "h"
 *   insn=0x000000000029AEF0 string=0x000000000029AEF4 "\t@"
 *   insn=0x000000000029AEF8 string=0x000000000029AEFC "h\n@"
 *   insn=0x000000000029AEFC string=0x000000000029AF00 ""
 *   insn=0x000000000029AF00 string=0x000000000029AF04 "h\n"
 *   insn=0x000000000029AF08 string=0x000000000029AF0C "h"
 *   insn=0x000000000029AF10 string=0x000000000029AF14 "@"
 *   insn=0x000000000029AF24 string=0x000000000029AF28 "!"
 *   insn=0x000000000029AF6C string=0x000000000029AF70 "^"
 *   insn=0x000000000029AF88 string=0x000000000029AF8C "E"
 *   insn=0x000000000029AF98 string=0x000000000029AF9C "-"
 *   insn=0x000000000029AFA8 string=0x000000000029AFAC "4"
 *   insn=0x000000000029AFB0 string=0x000000000029AFB4 ""
 *   insn=0x000000000029AFC0 string=0x000000000029AFC4 "\t@"
 *   insn=0x000000000029AFD0 string=0x000000000029AFD4 ""
 *   insn=0x000000000029AFE0 string=0x000000000029AFE4 "@"
 *   insn=0x000000000029AFF8 string=0x000000000029AFFC ""
 *   insn=0x000000000029B000 string=0x000000000029B004 "a"
 *   insn=0x000000000029B008 string=0x000000000029B00C "\t@"
 *   insn=0x000000000029B018 string=0x000000000029B01C ""
 *   insn=0x000000000029B020 string=0x000000000029B024 "a"
 *   insn=0x000000000029B028 string=0x000000000029B02C "@"
 *   insn=0x000000000029B058 string=0x000000000029B05C "4"
 *   insn=0x000000000029B060 string=0x000000000029B064 ""
 *   insn=0x000000000029B070 string=0x000000000029B074 "\t@"
 *   insn=0x000000000029B080 string=0x000000000029B084 ""
 *   insn=0x000000000029B090 string=0x000000000029B094 "@"
 *   insn=0x000000000029B0A0 string=0x000000000029B0A4 "4"
 *   insn=0x000000000029B0A8 string=0x000000000029B0AC ""
 *   insn=0x000000000029B0B8 string=0x000000000029B0BC "\t@"
 *   insn=0x000000000029B0C8 string=0x000000000029B0CC ""
 *   insn=0x000000000029B0D8 string=0x000000000029B0DC "@"
 *   insn=0x000000000029B100 string=0x000000000029B104 "s"
 *   insn=0x000000000029B104 string=0x000000000029B108 "`^@"
 *   insn=0x000000000029B108 string=0x000000000029B10C "@"
 *   insn=0x000000000029B10C string=0x000000000029B114 "`V@"
 *   insn=0x000000000029B110 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000029B114 string=0x000000000029B118 "@"
 *   insn=0x000000000029B118 string=0x000000000029B120 "`B@"
 *   insn=0x000000000029B120 string=0x000000000029B124 "@"
 *   insn=0x000000000029B124 string=0x000000000029B128 "bp"
 *   insn=0x000000000029B124 string=0x000000000029B12C "`2@"
 *   insn=0x000000000029B12C string=0x000000000029B130 "@"
 *   insn=0x000000000029B130 string=0x000000000029B134 "_p"
 *   insn=0x000000000029B130 string=0x000000000029B138 "t*@"
 *   insn=0x000000000029B138 string=0x000000000029B13C "4"
 *   insn=0x000000000029B140 string=0x000000000029B144 ""
 *   insn=0x000000000029B150 string=0x000000000029B154 "\t@"
 *   insn=0x000000000029B160 string=0x000000000029B164 ""
 *   insn=0x000000000029B170 string=0x000000000029B174 "@"
 *   insn=0x000000000029B188 string=0x000000000029B18C "Ip"
 *   insn=0x000000000029B1A0 string=0x000000000029B1A4 "Cp"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::MonsterDeathControllerComponent::CreateSliceObject(
        __int64 a1,
        __int64 *a2,
        const Caver::Vector3 *a3)
{
  __int64 v6; // x22
  int v7; // w8
  __int64 v8; // x8
  __int64 v9; // x9
  float v10; // w9
  float *v11; // x8
  Caver::ModelComponent *v12; // x21
  _QWORD *v13; // x8
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x20
  int v18; // w8
  _DWORD *v19; // x0
  int v20; // w8
  int v21; // w8
  Caver::SceneObject *result; // x0
  int v23; // w8
  __int64 v24; // [xsp+1C8h] [xbp-58h] BYREF
  _QWORD *v25; // [xsp+1D0h] [xbp-50h]
  Caver::SceneObject *v26; // [xsp+1D8h] [xbp-48h] BYREF
  float v27; // [xsp+1E0h] [xbp-40h] BYREF
  float v28; // [xsp+1E4h] [xbp-3Ch]
  __int64 v29; // [xsp+1E8h] [xbp-38h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = operator new(0x128u);
  Caver::SceneObject::SceneObject((Caver::SceneObject *)v6);
  v7 = *(_DWORD *)(v6 + 8);
  v26 = (Caver::SceneObject *)v6;
  *(_DWORD *)(v6 + 8) = v7 + 1;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(v8 + 112);
  LODWORD(v8) = *(_DWORD *)(v8 + 120);
  v24 = v9;
  LODWORD(v25) = v8;
  Caver::Vector2::Vector2((Caver::Vector2 *)&v27, (const Caver::Vector3 *)&v24);
  if ( fabsf(v27 - *(float *)(v6 + 112)) <= 0.0001 )
  {
    v11 = (float *)(v6 + 116);
    if ( fabsf(v28 - *(float *)(v6 + 116)) <= 0.0001 )
      goto LABEL_7;
    v10 = v28;
  }
  else
  {
    v10 = v28;
    v11 = (float *)(v6 + 116);
  }
  *(float *)(v6 + 112) = v27;
  *v11 = v10;
  if ( !*(_BYTE *)(v6 + 180) )
  {
    Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v6);
    *(_BYTE *)(v6 + 180) = 1;
  }
LABEL_7:
  *(_DWORD *)(v6 + 120) = (_DWORD)v25;
  (*(void (__fastcall **)(_QWORD, Caver::SceneObject **))(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 32LL) + 40LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 32LL),
    &v26);
  v12 = (Caver::ModelComponent *)operator new(0x140u);
  Caver::ModelComponent::ModelComponent(v12);
  v24 = *a2;
  v13 = (_QWORD *)a2[1];
  v25 = v13;
  if ( v13 )
    ++v13[1];
  Caver::ModelComponent::InitWithModel();
  v14 = v25;
  if ( v25 )
  {
    v15 = v25[1] - 1LL;
    v25[1] = v15;
    if ( !v15 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  Caver::SceneObject::AddComponent(v26, v12);
  v17 = operator new(0x120u);
  Caver::ParticleObjectComponent::ParticleObjectComponent((Caver::ParticleObjectComponent *)v17);
  Caver::SceneObject::AddComponent(v26, (Caver::Component *)v17);
  v18 = *((_DWORD *)v12 + 8);
  if ( *(_DWORD *)(v17 + 120) != v18 )
  {
    v19 = *(_DWORD **)(v17 + 128);
    *(_DWORD *)(v17 + 120) = v18;
    *(_QWORD *)(v17 + 128) = 0;
    if ( v19 )
    {
      v20 = v19[2] - 1;
      v19[2] = v20;
      if ( !v20 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  Caver::Vector2::Vector2((Caver::Vector2 *)&v24, a3);
  Caver::PhysicsObjectState::setVelocity((Caver::PhysicsObjectState *)(v17 + 136), (const Caver::Vector2 *)&v24);
  v21 = *((_DWORD *)a3 + 2);
  result = v26;
  *(_DWORD *)(v17 + 280) = 0x40000000;
  *(_DWORD *)(v17 + 272) = v21;
  if ( result )
  {
    v23 = *((_DWORD *)result + 2) - 1;
    *((_DWORD *)result + 2) = v23;
    if ( !v23 )
      return (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

