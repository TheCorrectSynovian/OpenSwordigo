/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029CB68
 * Mangled: _ZN5Caver34ShootingMonsterControllerComponent6UpdateEf
 * Demangled: Caver::ShootingMonsterControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002004C0  Caver::ShootingMonsterControllerComponent::Update(float)
 *
 * Callees: 14
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5990  Caver::SceneObject::WorldPointFromLocalPoint(Caver::Vector2 const&)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FBEF0  Caver::MonsterControllerComponent::FindNearestEnemy(void)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *   0x00000000002004C0  Caver::ShootingMonsterControllerComponent::Update(float)
 *   0x0000000000203C80  Caver::SceneObject::WorldDirectionFromLocalDirection(Caver::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 223
 *   insn=0x000000000029CB8C string=0x000000000029CB90 "V"
 *   insn=0x000000000029CB98 string=0x000000000029CB9C ""
 *   insn=0x000000000029CBA0 string=0x000000000029CBA4 "hB@"
 *   insn=0x000000000029CBA8 string=0x000000000029CBAC "`"
 *   insn=0x000000000029CBA8 string=0x000000000029CBC0 "hN@"
 *   insn=0x000000000029CBB4 string=0x000000000029CBB8 "hB@"
 *   insn=0x000000000029CBB4 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029CBC4 string=0x000000000029CBC8 "`""
 *   insn=0x000000000029CBC4 string=0x000000000029CBDC "i"
 *   insn=0x000000000029CBD0 string=0x000000000029CBD4 "hN@"
 *   insn=0x000000000029CBD4 string=0x000000000029CBD8 "."
 *   insn=0x000000000029CBE8 string=0x000000000029CBEC "@"
 *   insn=0x000000000029CBE8 string=0x000000000029CBFC "t"
 *   insn=0x000000000029CBF0 string=0x000000000029CBF4 ""
 *   insn=0x000000000029CBF0 string=0x000000000029CC68 "h\nA"
 *   insn=0x000000000029CBF8 string=0x000000000029CC60 ""
 *   insn=0x000000000029CC08 string=0x000000000029CC0C ")\t"
 *   insn=0x000000000029CC24 string=0x000000000029CC28 "@"
 *   insn=0x000000000029CC24 string=0x000000000029CC44 "5"
 *   insn=0x000000000029CC28 string=0x000000000029CC2C ""
 *   insn=0x000000000029CC2C string=0x000000000029CC30 ""
 *   insn=0x000000000029CC34 string=0x000000000029CC38 ""
 *   insn=0x000000000029CC38 string=0x000000000029CC3C ""
 *   insn=0x000000000029CC48 string=0x000000000029CC4C ""
 *   insn=0x000000000029CC6C string=0x000000000029CC70 "`B@"
 *   insn=0x000000000029CC6C string=0x000000000029CCC4 "hrD9"
 *   insn=0x000000000029CC70 string=0x000000000029CC74 "`"
 *   insn=0x000000000029CC74 string=0x000000000029CC80 "`"
 *   insn=0x000000000029CC88 string=0x000000000029CC8C "`B@"
 *   insn=0x000000000029CC8C string=0x000000000029CC90 "h\nA"
 *   insn=0x000000000029CC98 string=0x000000000029CC9C "@"
 *   insn=0x000000000029CC9C string=0x000000000029CCA0 "t\n"
 *   insn=0x000000000029CCA4 string=0x000000000029CCA8 "`"
 *   insn=0x000000000029CCB0 string=0x000000000029CCB4 "`B@"
 *   insn=0x000000000029CCBC string=0x00000000001FD020 "0'"
 *   insn=0x000000000029CCC4 string=0x000000000029CCC8 ""
 *   insn=0x000000000029CCC8 string=0x000000000029CCCC "hvD9"
 *   insn=0x000000000029CCC8 string=0x000000000029CD68 "`"
 *   insn=0x000000000029CCD0 string=0x000000000029CCD4 "`~@"
 *   insn=0x000000000029CCD0 string=0x000000000029D0A4 "`~@"
 *   insn=0x000000000029CCD8 string=0x000000000029CCDC "`"
 *   insn=0x000000000029CCD8 string=0x000000000029CCEC ""
 *   insn=0x000000000029CCE4 string=0x000000000029CCE8 "`~@"
 *   insn=0x000000000029CCEC string=0x000000000029CCF0 ""
 *   insn=0x000000000029CCF4 string=0x000000000029CCF8 ""
 *   insn=0x000000000029CCFC string=0x000000000029CD00 "+"
 *   insn=0x000000000029CD04 string=0x000000000029CD08 "6b"
 *   insn=0x000000000029CD08 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000029CD10 string=0x000000000029CD14 "aB"
 *   insn=0x000000000029CD10 string=0x00000000001FAB30 "0'"
 *   insn=0x000000000029CD18 string=0x000000000029CD1C "Ac"
 *   insn=0x000000000029CD1C string=0x000000000029CD20 "h"
 *   insn=0x000000000029CD1C string=0x00000000001F5A20 "P'"
 *   insn=0x000000000029CD24 string=0x000000000029CD28 "`"
 *   insn=0x000000000029CD38 string=0x00000000001F5990 "P'"
 *   insn=0x000000000029CD40 string=0x000000000029CD44 "("
 *   insn=0x000000000029CD4C string=0x000000000029CD50 "!"
 *   insn=0x000000000029CD50 string=0x000000000029CD54 "  ""
 *   insn=0x000000000029CD54 string=0x000000000029CD58 "\t"
 *   insn=0x000000000029CD68 string=0x000000000029CD6C "a"A"
 *   insn=0x000000000029CD74 string=0x000000000029CD78 "!(("
 *   insn=0x000000000029CD78 string=0x000000000029CD7C "`"
 *   insn=0x000000000029CD7C string=0x000000000029CD80 "a""
 *   insn=0x000000000029CD80 string=0x000000000029CD84 "[|"
 *   insn=0x000000000029CD84 string=0x00000000001FBEF0 "0'"
 *   insn=0x000000000029CD88 string=0x000000000029CD8C "4"
 *   insn=0x000000000029CD94 string=0x000000000029CD98 ""
 *   insn=0x000000000029CD9C string=0x000000000029CDA0 "h"
 *   insn=0x000000000029CDA4 string=0x000000000029CDA8 "`B@"
 *   insn=0x000000000029CDB0 string=0x000000000029CDB4 "`"
 *   insn=0x000000000029CDB0 string=0x000000000029CDC4 "p@"
 *   insn=0x000000000029CDB8 string=0x000000000029CDBC "Ik"
 *   insn=0x000000000029CDBC string=0x000000000029CDC0 "`B@"
 *   insn=0x000000000029CDC4 string=0x000000000029CDC8 "I"
 *   insn=0x000000000029CDC8 string=0x000000000029CDCC ""}I"
 *   insn=0x000000000029CDCC string=0x000000000029CDD0 " 9,"
 *   insn=0x000000000029CDD4 string=0x000000000029CDD8 "\t#"
 *   insn=0x000000000029CDDC string=0x000000000029CDE0 "(! "
 *   insn=0x000000000029CDE4 string=0x000000000029CDE8 "  ""
 *   insn=0x000000000029CDE8 string=0x000000000029CDEC "E"
 *   insn=0x000000000029CDEC string=0x000000000029CDF0 "I"
 *   insn=0x000000000029CDF0 string=0x000000000029CDF4 " -H"
 *   insn=0x000000000029CDF4 string=0x000000000029CDF8 "A9+"
 *   insn=0x000000000029CDF8 string=0x000000000029CDFC "!"
 *   insn=0x000000000029CDFC string=0x000000000029CE00 "   "
 *   insn=0x000000000029CE08 string=0x000000000029CE0C "(! "
 *   insn=0x000000000029CE0C string=0x000000000029CE10 "L"
 *   insn=0x000000000029CE10 string=0x000000000029CE14 "i"
 *   insn=0x000000000029CE10 string=0x000000000029CE78 "(! "
 *   insn=0x000000000029CE14 string=0x000000000029CE18 "`"A"
 *   insn=0x000000000029CE18 string=0x000000000029CE1C "!"
 *   insn=0x000000000029CE2C string=0x000000000029CE30 "`"
 *   insn=0x000000000029CE2C string=0x000000000029CE44 "i\nA"
 *   insn=0x000000000029CE34 string=0x000000000029CE38 "*k"
 *   insn=0x000000000029CE38 string=0x000000000029CE3C "`B@"
 *   insn=0x000000000029CE3C string=0x000000000029CE40 "p@"
 *   insn=0x000000000029CE44 string=0x000000000029CE48 "?"
 *   insn=0x000000000029CE48 string=0x000000000029CE4C "`"
 *   insn=0x000000000029CE50 string=0x000000000029CE54 "u\n"
 *   insn=0x000000000029CE58 string=0x000000000029CE5C "`"
 *   insn=0x000000000029CE64 string=0x000000000029CE68 "`B@"
 *   insn=0x000000000029CE6C string=0x000000000029CE70 "l"
 *   insn=0x000000000029CE7C string=0x000000000029CE80 "H"
 *   insn=0x000000000029CE84 string=0x000000000029CE88 "`"
 *   insn=0x000000000029CE84 string=0x000000000029CEF8 "`"A"
 *   insn=0x000000000029CE90 string=0x000000000029CE94 "-"
 *   insn=0x000000000029CE94 string=0x000000000029CE98 "H"
 *   insn=0x000000000029CE98 string=0x000000000029CE9C "`"A"
 *   insn=0x000000000029CEA8 string=0x000000000029CEAC "`~@"
 *   insn=0x000000000029CEA8 string=0x000000000029CEFC "h"
 *   insn=0x000000000029CEB0 string=0x000000000029CEB4 "`"
 *   insn=0x000000000029CEB0 string=0x000000000029CEC4 ""
 *   insn=0x000000000029CEB8 string=0x000000000029CEBC "\tk"
 *   insn=0x000000000029CEBC string=0x000000000029CEC0 "`~@"
 *   insn=0x000000000029CEC4 string=0x000000000029CEC8 ""
 *   insn=0x000000000029CED0 string=0x000000000029CED4 "h"
 *   insn=0x000000000029CEDC string=0x000000000029CEE0 "\tY"
 *   insn=0x000000000029CEE0 string=0x000000000029CEE4 "j:"
 *   insn=0x000000000029CF04 string=0x000000000029CF08 "M"
 *   insn=0x000000000029CF08 string=0x000000000029CF0C ""
 *   insn=0x000000000029CF0C string=0x000000000029CF10 ""
 *   insn=0x000000000029CF10 string=0x000000000029CF14 "h"
 *   insn=0x000000000029CF18 string=0x000000000029CF1C "h"
 *   insn=0x000000000029CF1C string=0x000000000029CF20 "a"
 *   insn=0x000000000029CF2C string=0x000000000029CF30 "h\nA"
 *   insn=0x000000000029CF2C string=0x000000000029CF68 "b"
 *   insn=0x000000000029CF38 string=0x000000000029CF3C "`B@"
 *   insn=0x000000000029CF40 string=0x000000000029CF44 "h\n"
 *   insn=0x000000000029CF48 string=0x000000000029CF4C "`"
 *   insn=0x000000000029CF54 string=0x000000000029CF58 "`B@"
 *   insn=0x000000000029CF5C string=0x000000000029CF60 "0"
 *   insn=0x000000000029CF68 string=0x000000000029CF6C "!(""
 *   insn=0x000000000029CF74 string=0x000000000029CF78 "h\nA"
 *   insn=0x000000000029CF80 string=0x000000000029CF84 "`B@"
 *   insn=0x000000000029CF84 string=0x000000000029CF88 ""
 *   insn=0x000000000029CF88 string=0x000000000029CF8C "h\n"
 *   insn=0x000000000029CF90 string=0x000000000029CF94 "`"
 *   insn=0x000000000029CF9C string=0x000000000029CFA0 "`B@"
 *   insn=0x000000000029CFB0 string=0x000000000029D100 "hrD9"
 *   insn=0x000000000029CFB4 string=0x000000000029CFB8 ""
 *   insn=0x000000000029CFC8 string=0x000000000029CFCC ""
 *   insn=0x000000000029CFD0 string=0x000000000029CFD4 "K"
 *   insn=0x000000000029CFE0 string=0x000000000029CFE4 "#8#"
 *   insn=0x000000000029CFE4 string=0x000000000029CFE8 "c"
 *   insn=0x000000000029CFE8 string=0x000000000029CFEC "` ""
 *   insn=0x000000000029CFEC string=0x000000000029CFF0 "I"
 *   insn=0x000000000029CFF0 string=0x000000000029CFF4 ")"
 *   insn=0x000000000029CFF0 string=0x000000000029D018 "`"
 *   insn=0x000000000029CFF8 string=0x000000000029CFFC "\t"
 *   insn=0x000000000029D008 string=0x000000000029D00C "ec"
 *   insn=0x000000000029D00C string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000029D018 string=0x000000000029D01C "("
 *   insn=0x000000000029D024 string=0x000000000029D028 "\tx@"
 *   insn=0x000000000029D03C string=0x000000000029D040 "Ho"
 *   insn=0x000000000029D050 string=0x000000000029D054 "h"
 *   insn=0x000000000029D054 string=0x000000000029D058 ")"
 *   insn=0x000000000029D05C string=0x000000000029D060 ""
 *   insn=0x000000000029D060 string=0x000000000029D064 ""
 *   insn=0x000000000029D07C string=0x000000000029D080 "@"
 *   insn=0x000000000029D080 string=0x000000000029D084 ""
 *   insn=0x000000000029D084 string=0x000000000029D088 ""
 *   insn=0x000000000029D08C string=0x000000000029D090 ""
 *   insn=0x000000000029D090 string=0x000000000029D094 ""
 *   insn=0x000000000029D09C string=0x000000000029D0A0 "hv"
 *   insn=0x000000000029D0A8 string=0x000000000029D0AC "`"
 *   insn=0x000000000029D0A8 string=0x000000000029D0BC ""
 *   insn=0x000000000029D0B4 string=0x000000000029D0B8 "`~@"
 *   insn=0x000000000029D0BC string=0x000000000029D0C0 ""
 *   insn=0x000000000029D0C4 string=0x000000000029D0C8 ""
 *   insn=0x000000000029D0CC string=0x000000000029D0D0 "h"
 *   insn=0x000000000029D0E0 string=0x000000000029D0E4 "@  "
 *   insn=0x000000000029D0E8 string=0x000000000029D0EC "h"
 *   insn=0x000000000029D0EC string=0x000000000029D0F0 ") "
 *   insn=0x000000000029D0F0 string=0x000000000029D0F4 "\tY"
 *   insn=0x000000000029D0F8 string=0x000000000029D0FC ""
 *   insn=0x000000000029D0FC string=0x000000000029D11C "h\nA"
 *   insn=0x000000000029D108 string=0x000000000029D10C "`B@"
 *   insn=0x000000000029D10C string=0x000000000029D110 "@"
 *   insn=0x000000000029D110 string=0x000000000029D114 "\t"
 *   insn=0x000000000029D110 string=0x000000000029D138 "t"
 *   insn=0x000000000029D118 string=0x000000000029D154 ""
 *   insn=0x000000000029D120 string=0x000000000029D124 "`"
 *   insn=0x000000000029D128 string=0x000000000029D12C "\t!"
 *   insn=0x000000000029D12C string=0x000000000029D130 "`B@"
 *   insn=0x000000000029D140 string=0x000000000029D144 "gj"
 *   insn=0x000000000029D144 string=0x000000000029D148 "`B@"
 *   insn=0x000000000029D148 string=0x000000000029D14C "\t"
 *   insn=0x000000000029D154 string=0x000000000029D15C ""
 *   insn=0x000000000029D15C string=0x000000000029D160 ""
 *   insn=0x000000000029D164 string=0x000000000029D168 "e@"
 *   insn=0x000000000029D16C string=0x000000000029D170 "`N@"
 *   insn=0x000000000029D174 string=0x000000000029D178 "`""
 *   insn=0x000000000029D174 string=0x000000000029D188 ""
 *   insn=0x000000000029D17C string=0x000000000029D180 "Xj"
 *   insn=0x000000000029D180 string=0x000000000029D184 "`N@"
 *   insn=0x000000000029D18C string=0x000000000029D190 "e@"
 *   insn=0x000000000029D1A4 string=0x000000000029D214 "/d"
 *   insn=0x000000000029D1D0 string=0x000000000029D1D4 "`B@"
 *   insn=0x000000000029D1E4 string=0x000000000029D1E8 ">j"
 *   insn=0x000000000029D1E8 string=0x000000000029D1EC "`B@"
 *   insn=0x000000000029D1EC string=0x000000000029D1F0 ""
 *   insn=0x000000000029D1F0 string=0x000000000029D1F8 ""
 *   insn=0x000000000029D1F8 string=0x000000000029D1FC " "
 *   insn=0x000000000029D1FC string=0x000000000029D200 "`"
 *   insn=0x000000000029D204 string=0x000000000029D208 "6j"
 *   insn=0x000000000029D208 string=0x000000000029D20C "`B@"
 *   insn=0x000000000029D214 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029D230 string=0x000000000029D234 ""
 *   insn=0x000000000029D240 string=0x000000000029D244 ""
 *   insn=0x000000000029D24C string=0x000000000029D250 ""
 *   insn=0x000000000029D258 string=0x000000000029D25C ""
 *   insn=0x000000000029D25C string=0x000000000029D260 "\t\t@"
 *   insn=0x000000000029D260 string=0x000000000029D264 ")"
 *   insn=0x000000000029D264 string=0x000000000029D268 "\t\t"
 *   insn=0x000000000029D26C string=0x000000000029D270 "\t"
 *   insn=0x000000000029D270 string=0x000000000029D274 ")"
 *   insn=0x000000000029D278 string=0x000000000029D27C " "
 *   insn=0x000000000029D288 string=0x000000000029D28C "\th"
 *   insn=0x000000000029D28C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000029D29C string=0x000000000029D2A0 ""
 *   insn=0x000000000029D2AC string=0x000000000029D2B0 ""
 *   insn=0x000000000029D2C0 string=0x000000000029D2C4 """
 *   insn=0x000000000029D2C8 string=0x000000000029D2CC "}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::ShootingMonsterControllerComponent::Update(_QWORD *this, long double a2)
{
  __int64 v2; // x19
  __int64 v4; // x8
  __int64 *v5; // x0
  __int64 v6; // x8
  __int64 *v7; // x20
  char v8; // w21
  _DWORD *v9; // x0
  int v10; // w8
  int v11; // w8
  Caver::EntityComponent *v12; // x0
  int v13; // w8
  int v14; // w20
  __int64 v15; // x0
  float32x2_t *v16; // x20
  int v17; // w9
  _DWORD *v18; // x8
  float v19; // s1
  __int64 NearestEnemy; // x0
  _DWORD *v21; // x20
  __int64 v22; // x8
  float v23; // s9
  float v24; // s10
  Caver::EntityComponent *v25; // x0
  float v26; // s11
  float v27; // s12
  int v28; // w8
  float v29; // s0
  float v30; // s9
  _BOOL4 v31; // w24
  float v32; // s1
  _BOOL4 v33; // w25
  bool v34; // w26
  int v35; // w21
  float v36; // s0
  __int64 v37; // x0
  float v38; // s1
  float v39; // s0
  Caver::EntityComponent *v40; // x0
  Caver::EntityComponent *v41; // x0
  int v42; // w8
  Caver::SceneObject *v43; // x0
  unsigned __int32 v44; // w9
  unsigned __int32 v45; // w9
  __int64 v46; // x0
  void (__fastcall *v47)(__int64, _QWORD *); // x8
  __int64 v48; // x0
  int v49; // w8
  __int64 v50; // x0
  __int64 v51; // x0
  float v52; // s9
  __int64 v53; // x0
  int v54; // w8
  __int64 v55; // x0
  float32x2_t v56; // [xsp+0h] [xbp-90h]
  _QWORD v57[2]; // [xsp+10h] [xbp-80h] BYREF

  v2 = (__int64)this;
  v57[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( this[16]
    || (this = (_QWORD *)Caver::ComponentOutletBase::Connect(
                           (Caver::ComponentOutletBase *)(this + 14),
                           (const Caver::Component *)this),
        *(_QWORD *)(v2 + 128)) )
  {
    v4 = *(_QWORD *)(v2 + 152);
    if ( v4
      || (this = (_QWORD *)Caver::ComponentOutletBase::Connect(
                             (Caver::ComponentOutletBase *)(v2 + 136),
                             (const Caver::Component *)v2),
          (v4 = *(_QWORD *)(v2 + 152)) != 0) )
    {
      if ( *(_QWORD *)(v2 + 256) )
      {
        v5 = *(__int64 **)(v4 + 160);
        if ( v5 )
        {
          if ( !*((_DWORD *)v5 + 2) )
          {
            v6 = *v5;
LABEL_18:
            (*(void (__fastcall **)(__int64 *))(v6 + 8))(v5);
          }
        }
        else
        {
          v7 = *(__int64 **)(v2 + 256);
          if ( v7 )
          {
            v8 = 0;
            *((_DWORD *)v7 + 2) += 2;
          }
          else
          {
            v8 = 1;
          }
          v9 = *(_DWORD **)(v4 + 160);
          *(_QWORD *)(v4 + 160) = v7;
          if ( v9 )
          {
            v10 = v9[2] - 1;
            v9[2] = v10;
            if ( !v10 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
          }
          if ( (v8 & 1) == 0 )
          {
            v11 = *((_DWORD *)v7 + 2) - 1;
            *((_DWORD *)v7 + 2) = v11;
            if ( !v11 )
            {
              v6 = *v7;
              v5 = v7;
              goto LABEL_18;
            }
          }
        }
        if ( !*(_DWORD *)(v2 + 264) )
        {
          v12 = *(Caver::EntityComponent **)(v2 + 128);
          if ( v12 )
          {
            v13 = 0;
          }
          else
          {
            Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v2 + 112), (const Caver::Component *)v2);
            v12 = *(Caver::EntityComponent **)(v2 + 128);
            v13 = *(_DWORD *)(v2 + 264);
          }
          v14 = *((_DWORD *)v12 + 28);
          if ( v13 != v14 )
          {
            *(_DWORD *)(v2 + 264) = v14;
            if ( !v12 )
            {
              Caver::ComponentOutletBase::Connect(
                (Caver::ComponentOutletBase *)(v2 + 112),
                (const Caver::Component *)v2);
              v12 = *(Caver::EntityComponent **)(v2 + 128);
            }
            Caver::EntityComponent::SetFacingDirection(v12, v14);
            *(_DWORD *)(v2 + 288) = 0;
          }
        }
        if ( *(_BYTE *)(v2 + 284) )
        {
          if ( *(_BYTE *)(v2 + 285) )
            goto LABEL_81;
          v15 = *(_QWORD *)(v2 + 248);
          if ( !v15 )
          {
            Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v2 + 232), (const Caver::Component *)v2);
            v15 = *(_QWORD *)(v2 + 248);
          }
          if ( *(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 264LL))(v15) + 16) < 7 )
          {
LABEL_81:
            v50 = *(_QWORD *)(v2 + 248);
            if ( !v50 )
            {
              Caver::ComponentOutletBase::Connect(
                (Caver::ComponentOutletBase *)(v2 + 232),
                (const Caver::Component *)v2);
              v50 = *(_QWORD *)(v2 + 248);
            }
            v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 264LL))(v50);
            if ( !*(_BYTE *)(v51 + 44) && *(float *)(v51 + 12) > (float)(*(float *)(v51 + 40) + -0.0001) )
            {
              *(_WORD *)(*(_QWORD *)(v2 + 256) + 44LL) = 257;
              *(_BYTE *)(v2 + 284) = 0;
              goto LABEL_89;
            }
LABEL_86:
            v52 = 0.0;
            if ( *(_BYTE *)(v2 + 284) )
            {
              v53 = *(_QWORD *)(v2 + 128);
              if ( !v53 )
                goto LABEL_91;
              goto LABEL_88;
            }
LABEL_89:
            v54 = *(_DWORD *)(v2 + 264);
            if ( v54 )
            {
              v52 = *(float *)(v2 + 200) * (float)v54;
              v53 = *(_QWORD *)(v2 + 128);
              if ( !v53 )
                goto LABEL_91;
            }
            else
            {
              v52 = 0.0;
              v53 = *(_QWORD *)(v2 + 128);
              if ( !v53 )
              {
LABEL_91:
                Caver::ComponentOutletBase::Connect(
                  (Caver::ComponentOutletBase *)(v2 + 112),
                  (const Caver::Component *)v2);
                v53 = *(_QWORD *)(v2 + 128);
                *(float *)(v53 + 176) = v52;
                if ( !v53 )
                {
                  Caver::ComponentOutletBase::Connect(
                    (Caver::ComponentOutletBase *)(v2 + 112),
                    (const Caver::Component *)v2);
                  v53 = *(_QWORD *)(v2 + 128);
                  *(_DWORD *)(v53 + 180) = 1153138688;
                  if ( !v53 )
                  {
                    Caver::ComponentOutletBase::Connect(
                      (Caver::ComponentOutletBase *)(v2 + 112),
                      (const Caver::Component *)v2);
                    v53 = *(_QWORD *)(v2 + 128);
                  }
                  goto LABEL_93;
                }
LABEL_92:
                *(_DWORD *)(v53 + 180) = 1153138688;
LABEL_93:
                (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v53 + 200LL))(v53, a2);
                v55 = *(_QWORD *)(v2 + 152);
                if ( !v55 )
                {
                  Caver::ComponentOutletBase::Connect(
                    (Caver::ComponentOutletBase *)(v2 + 136),
                    (const Caver::Component *)v2);
                  v55 = *(_QWORD *)(v2 + 152);
                }
                return (_QWORD *)(*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)v55 + 200LL))(v55, a2);
              }
            }
LABEL_88:
            *(float *)(v53 + 176) = v52;
            goto LABEL_92;
          }
          v16 = (float32x2_t *)operator new(0x128u);
          Caver::SceneObject::SceneObject((Caver::SceneObject *)v16);
          Caver::SceneObject::InitWithTemplate((Caver::SceneObject *)v16);
          Caver::SceneObject::WorldPointFromLocalPoint();
          if ( fabsf(*(float *)v57 - v16[14].n64_f32[0]) <= 0.0001 )
          {
            v18 = (_DWORD *)&v16[14] + 1;
            if ( fabsf(*((float *)v57 + 1) - v16[14].n64_f32[1]) <= 0.0001 )
            {
LABEL_77:
              v43 = *(Caver::SceneObject **)(v2 + 40);
              v44 = *((_DWORD *)v43 + 30);
              v57[0] = 1065353216;
              v16[15].n64_u32[0] = v44;
              Caver::SceneObject::WorldDirectionFromLocalDirection(v43, (const Caver::Vector2 *)v57);
              v45 = v16[1].n64_u32[0];
              v16[13].n64_u64[0] = vmul_f32(v56, vdup_n_s32(0x437A0000u)).n64_u64[0];
              v46 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 32LL);
              v47 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v46 + 40LL);
              v57[0] = v16;
              v16[1].n64_u32[0] = v45 + 1;
              v47(v46, v57);
              v48 = v57[0];
              if ( v57[0] )
              {
                v49 = *(_DWORD *)(v57[0] + 8LL) - 1;
                *(_DWORD *)(v57[0] + 8LL) = v49;
                if ( !v49 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 8LL))(v48);
              }
              *(_BYTE *)(v2 + 285) = 1;
              goto LABEL_81;
            }
            v17 = HIDWORD(v57[0]);
          }
          else
          {
            v17 = HIDWORD(v57[0]);
            v18 = (_DWORD *)&v16[14] + 1;
          }
          v16[14].n64_u32[0] = v57[0];
          *v18 = v17;
          if ( !v16[22].n64_u8[4] )
          {
            Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v16);
            v16[22].n64_u8[4] = 1;
          }
          goto LABEL_77;
        }
        v19 = *(float *)(v2 + 288) + *(float *)&a2;
        *(float *)(v2 + 280) = *(float *)(v2 + 280) + *(float *)&a2;
        *(float *)(v2 + 288) = v19;
        NearestEnemy = Caver::MonsterControllerComponent::FindNearestEnemy((Caver::MonsterControllerComponent *)v2);
        v21 = (_DWORD *)NearestEnemy;
        if ( NearestEnemy )
        {
          ++*(_DWORD *)(NearestEnemy + 8);
          v22 = *(_QWORD *)(v2 + 40);
          v23 = *(float *)(NearestEnemy + 112);
          v24 = *(float *)(NearestEnemy + 116);
          v25 = *(Caver::EntityComponent **)(v2 + 128);
          v27 = *(float *)(v22 + 112);
          v26 = *(float *)(v22 + 116);
          if ( !v25 )
          {
            Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v2 + 112), (const Caver::Component *)v2);
            v25 = *(Caver::EntityComponent **)(v2 + 128);
          }
          v28 = *((_DWORD *)v25 + 28);
          v29 = v23 - v27;
          v30 = (float)(v23 - v27) * (float)v28;
          v31 = v30 > 0.0;
          if ( fabsf(v29) < 300.0 )
          {
            v32 = fabsf(v24 - v26);
            v33 = v32 < 100.0;
            v34 = v32 >= 100.0;
            if ( v30 <= 0.0 && *(float *)(v2 + 288) > 1.2 && v32 < 100.0 )
            {
              if ( !v25 )
              {
                Caver::ComponentOutletBase::Connect(
                  (Caver::ComponentOutletBase *)(v2 + 112),
                  (const Caver::Component *)v2);
                v25 = *(Caver::EntityComponent **)(v2 + 128);
                v28 = *((_DWORD *)v25 + 28);
              }
              if ( *(_DWORD *)(v2 + 264) + v28 )
              {
                v35 = -v28;
                *(_DWORD *)(v2 + 264) = -v28;
                if ( !v25 )
                {
                  Caver::ComponentOutletBase::Connect(
                    (Caver::ComponentOutletBase *)(v2 + 112),
                    (const Caver::Component *)v2);
                  v25 = *(Caver::EntityComponent **)(v2 + 128);
                }
                Caver::EntityComponent::SetFacingDirection(v25, v35);
                *(_DWORD *)(v2 + 288) = 0;
              }
            }
            if ( !v34 && v30 > 0.0 && *(float *)(v2 + 280) > 2.0 )
            {
              v36 = *(float *)(v2 + 288);
              if ( v36 <= 0.6 )
              {
LABEL_56:
                if ( v36 > 1.2 && (!v31 || !v33) && *(_DWORD *)(v2 + 168) )
                {
                  v38 = *(float *)(v2 + 184);
                  v39 = *(float *)(*(_QWORD *)(v2 + 40) + 112LL);
                  if ( v39 >= v38 )
                  {
                    if ( v39 > (float)(v38 + *(float *)(v2 + 192)) && *(_DWORD *)(v2 + 264) != -1 )
                    {
                      v41 = *(Caver::EntityComponent **)(v2 + 128);
                      *(_DWORD *)(v2 + 264) = -1;
                      if ( !v41 )
                      {
                        Caver::ComponentOutletBase::Connect(
                          (Caver::ComponentOutletBase *)(v2 + 112),
                          (const Caver::Component *)v2);
                        v41 = *(Caver::EntityComponent **)(v2 + 128);
                      }
                      Caver::EntityComponent::SetFacingDirection(v41, -1);
                      goto LABEL_69;
                    }
                  }
                  else if ( *(_DWORD *)(v2 + 264) != 1 )
                  {
                    v40 = *(Caver::EntityComponent **)(v2 + 128);
                    *(_DWORD *)(v2 + 264) = 1;
                    if ( !v40 )
                    {
                      Caver::ComponentOutletBase::Connect(
                        (Caver::ComponentOutletBase *)(v2 + 112),
                        (const Caver::Component *)v2);
                      v40 = *(Caver::EntityComponent **)(v2 + 128);
                    }
                    Caver::EntityComponent::SetFacingDirection(v40, 1);
LABEL_69:
                    *(_DWORD *)(v2 + 288) = 0;
                  }
                }
                if ( v21 )
                {
                  v42 = v21[2] - 1;
                  v21[2] = v42;
                  if ( !v42 )
                    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v21 + 8LL))(v21);
                }
                goto LABEL_86;
              }
              v37 = *(_QWORD *)(v2 + 248);
              if ( !v37 )
              {
                Caver::ComponentOutletBase::Connect(
                  (Caver::ComponentOutletBase *)(v2 + 232),
                  (const Caver::Component *)v2);
                v37 = *(_QWORD *)(v2 + 248);
              }
              *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 264LL))(v37) + 12) = 0;
              *(_WORD *)(*(_QWORD *)(v2 + 256) + 44LL) = 256;
              *(_WORD *)(v2 + 284) = 1;
              *(_DWORD *)(v2 + 280) = 0;
            }
LABEL_55:
            v36 = *(float *)(v2 + 288);
            goto LABEL_56;
          }
        }
        else
        {
          v31 = 0;
        }
        v33 = 0;
        goto LABEL_55;
      }
    }
  }
  return this;
}

