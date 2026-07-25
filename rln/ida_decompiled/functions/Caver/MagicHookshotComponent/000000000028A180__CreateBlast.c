/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028A180
 * Mangled: _ZN5Caver22MagicHookshotComponent11CreateBlastEv
 * Demangled: Caver::MagicHookshotComponent::CreateBlast(void)
 *
 * Callers: 2
 *   0x00000000001F67D0  Caver::MagicHookshotComponent::CreateBlast(void)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *
 * Callees: 23
 *   0x00000000001F3600  Caver::MagicHookshotComponent::Destroy(void)
 *   0x00000000001F3730  Caver::SpellComponent::CasterObject(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F67D0  Caver::MagicHookshotComponent::CreateBlast(void)
 *   0x00000000001F6DE0  Caver::Vector2::Angle(void)
 *   0x00000000001F7220  Caver::DamageComponent::ResolvePotentialImpacts(bool)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001F95D0  Caver::MagicHookshotComponent::Update(float)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FD530  .sqrtf
 *   0x00000000001FF760  Caver::SceneObject::SetInstanceScaling(float)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x0000000000202D70  Caver::SpellComponent::CastPoint(void)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 221
 *   insn=0x000000000028A190 string=0x000000000028A194 "V"
 *   insn=0x000000000028A1A8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000028A1AC string=0x000000000028A1B0 "`"
 *   insn=0x000000000028A1B0 string=0x00000000001FAB30 "0'"
 *   insn=0x000000000028A1B8 string=0x000000000028A1BC ""
 *   insn=0x000000000028A1C0 string=0x000000000028A1C4 "h"
 *   insn=0x000000000028A1C4 string=0x000000000028A1C8 ""
 *   insn=0x000000000028A1D0 string=0x0000000000588C40 "particle_blast"
 *   insn=0x000000000028A1DC string=0x000000000028A1E0 "vr"
 *   insn=0x000000000028A1F0 string=0x000000000028A1F4 "c"
 *   insn=0x000000000028A1FC string=0x000000000028A200 ""
 *   insn=0x000000000028A200 string=0x00000000001F5A20 "P'"
 *   insn=0x000000000028A208 string=0x000000000028A20C "@"
 *   insn=0x000000000028A20C string=0x000000000028A210 ""
 *   insn=0x000000000028A210 string=0x000000000028A214 ""
 *   insn=0x000000000028A218 string=0x000000000028A21C ""
 *   insn=0x000000000028A21C string=0x000000000028A220 ""
 *   insn=0x000000000028A22C string=0x000000000028A230 ")"
 *   insn=0x000000000028A23C string=0x000000000028A240 "h"
 *   insn=0x000000000028A244 string=0x000000000028A248 "\t9@"
 *   insn=0x000000000028A248 string=0x000000000028A24C "y@"
 *   insn=0x000000000028A25C string=0x000000000028A260 "\"
 *   insn=0x000000000028A274 string=0x000000000028A278 "!"
 *   insn=0x000000000028A278 string=0x000000000028A27C "  ""
 *   insn=0x000000000028A288 string=0x000000000028A28C "\n"
 *   insn=0x000000000028A29C string=0x000000000028A2A0 "#8#"
 *   insn=0x000000000028A2A0 string=0x000000000028A2A4 "c"
 *   insn=0x000000000028A2A4 string=0x000000000028A2A8 "` ""
 *   insn=0x000000000028A2AC string=0x000000000028A2B0 ")"
 *   insn=0x000000000028A2B4 string=0x000000000028A2B8 "\t"
 *   insn=0x000000000028A2CC string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000028A2E8 string=0x000000000028A2EC "h"
 *   insn=0x000000000028A2F0 string=0x000000000028A2F4 ""
 *   insn=0x000000000028A2F4 string=0x000000000028A2F8 ""
 *   insn=0x000000000028A308 string=0x000000000028A30C "@"
 *   insn=0x000000000028A30C string=0x000000000028A310 ""
 *   insn=0x000000000028A310 string=0x000000000028A314 ""
 *   insn=0x000000000028A318 string=0x000000000028A31C ""
 *   insn=0x000000000028A31C string=0x000000000028A320 ""
 *   insn=0x000000000028A34C string=0x000000000028A350 ")=G"
 *   insn=0x000000000028A350 string=0x000000000028A354 "!"
 *   insn=0x000000000028A358 string=0x000000000028A35C "\t"
 *   insn=0x000000000028A358 string=0x000000000028A370 "\t"
 *   insn=0x000000000028A35C string=0x000000000028A360 "*"
 *   insn=0x000000000028A360 string=0x000000000028A364 "\n"
 *   insn=0x000000000028A36C string=0x000000000028A37C "?"
 *   insn=0x000000000028A370 string=0x000000000028A374 "*"
 *   insn=0x000000000028A374 string=0x000000000028A378 "\n"
 *   insn=0x000000000028A384 string=0x000000000028A388 ""
 *   insn=0x000000000028A390 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028A398 string=0x000000000028A39C "("
 *   insn=0x000000000028A39C string=0x000000000028A3A0 "\t\t@"
 *   insn=0x000000000028A3A0 string=0x000000000028A3A4 ")"
 *   insn=0x000000000028A3A4 string=0x000000000028A3A8 "\t\t"
 *   insn=0x000000000028A3AC string=0x000000000028A3B0 "\t"
 *   insn=0x000000000028A3B0 string=0x000000000028A3B4 ")"
 *   insn=0x000000000028A3B8 string=0x000000000028A3BC " "
 *   insn=0x000000000028A3BC string=0x000000000028A3C0 ""
 *   insn=0x000000000028A3D0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000028A3D4 string=0x000000000028A3D8 ";"
 *   insn=0x000000000028A3E4 string=0x000000000028A3E8 ")"
 *   insn=0x000000000028A3F8 string=0x000000000028A3FC ")=G"
 *   insn=0x000000000028A3FC string=0x000000000028A400 "!"
 *   insn=0x000000000028A404 string=0x000000000028A408 "\t"
 *   insn=0x000000000028A404 string=0x000000000028A434 "\t"
 *   insn=0x000000000028A408 string=0x000000000028A40C "*"
 *   insn=0x000000000028A40C string=0x000000000028A410 "\n"
 *   insn=0x000000000028A414 string=0x000000000028A418 "?"
 *   insn=0x000000000028A42C string=0x000000000028A45C "@"
 *   insn=0x000000000028A434 string=0x000000000028A438 "*"
 *   insn=0x000000000028A438 string=0x000000000028A43C "\n"
 *   insn=0x000000000028A43C string=0x000000000028A440 "?"
 *   insn=0x000000000028A45C string=0x000000000028A460 ""
 *   insn=0x000000000028A460 string=0x000000000028A464 ""
 *   insn=0x000000000028A468 string=0x000000000028A46C ""
 *   insn=0x000000000028A46C string=0x000000000028A470 ""
 *   insn=0x000000000028A498 string=0x000000000028A49C "U"
 *   insn=0x000000000028A4A0 string=0x000000000028A4A4 ""
 *   insn=0x000000000028A4B4 string=0x00000000001F3730 "P'"
 *   insn=0x000000000028A4BC string=0x000000000028A4C0 "@"
 *   insn=0x000000000028A4BC string=0x000000000028A57C "`"
 *   insn=0x000000000028A4C0 string=0x000000000028A4C4 ""
 *   insn=0x000000000028A4C4 string=0x000000000028A4C8 ""
 *   insn=0x000000000028A4CC string=0x000000000028A4D0 ""
 *   insn=0x000000000028A4CC string=0x000000000028A4DC "t"
 *   insn=0x000000000028A4D0 string=0x000000000028A4D4 ""
 *   insn=0x000000000028A4E4 string=0x000000000028A4E8 """
 *   insn=0x000000000028A508 string=0x000000000028A50C "5"
 *   insn=0x000000000028A50C string=0x00000000001F6DE0 "0'"
 *   insn=0x000000000028A51C string=0x000000000028A520 "!"
 *   insn=0x000000000028A520 string=0x000000000028A524 "  ""
 *   insn=0x000000000028A524 string=0x000000000028A528 ""
 *   insn=0x000000000028A528 string=0x000000000028A548 "t"
 *   insn=0x000000000028A550 string=0x000000000028A554 ""
 *   insn=0x000000000028A568 string=0x000000000028A56C "h"
 *   insn=0x000000000028A56C string=0x000000000028A570 "i"
 *   insn=0x000000000028A570 string=0x000000000028A574 "9@"
 *   insn=0x000000000028A574 string=0x000000000028A578 "("
 *   insn=0x000000000028A57C string=0x000000000028A580 "`"
 *   insn=0x000000000028A580 string=0x000000000028A58C "hbE9H"
 *   insn=0x000000000028A584 string=0x000000000028A588 "&"
 *   insn=0x000000000028A588 string=0x00000000001F7220 "0'"
 *   insn=0x000000000028A58C string=0x000000000028A590 "H"
 *   insn=0x000000000028A590 string=0x000000000028A594 "h"
 *   insn=0x000000000028A598 string=0x000000000028A59C "!"
 *   insn=0x000000000028A598 string=0x0000000000588C8C "\n"
 *   insn=0x000000000028A5AC string=0x000000000028A5B0 "\t"
 *   insn=0x000000000028A5B8 string=0x000000000028A5BC "`nA"
 *   insn=0x000000000028A5BC string=0x000000000028A5C0 "\t"
 *   insn=0x000000000028A5C8 string=0x000000000028A5CC "bbA"
 *   insn=0x000000000028A5CC string=0x000000000028A5D0 " "
 *   insn=0x000000000028A5D4 string=0x000000000028A5D8 "@  "
 *   insn=0x000000000028A5DC string=0x000000000028A5E0 "`jA"
 *   insn=0x000000000028A5E0 string=0x000000000028A5E4 "a^A"
 *   insn=0x000000000028A5EC string=0x000000000028A5F0 "bfA"
 *   insn=0x000000000028A5F4 string=0x000000000028A5F8 "$"
 *   insn=0x000000000028A600 string=0x000000000028A604 "A$"
 *   insn=0x000000000028A608 string=0x000000000028A60C "e"
 *   insn=0x000000000028A60C string=0x000000000028A618 "h"
 *   insn=0x000000000028A614 string=0x00000000001F3600 "P'"
 *   insn=0x000000000028A618 string=0x000000000028A61C "h"
 *   insn=0x000000000028A61C string=0x000000000028A620 "h"
 *   insn=0x000000000028A61C string=0x000000000028A628 "t"
 *   insn=0x000000000028A620 string=0x000000000028A624 ""
 *   insn=0x000000000028A63C string=0x000000000028A640 "d"
 *   insn=0x000000000028A64C string=0x000000000028A650 "!8#"
 *   insn=0x000000000028A654 string=0x000000000028A658 "!!"
 *   insn=0x000000000028A65C string=0x000000000028A660 " "
 *   insn=0x000000000028A664 string=0x000000000028A668 "g"
 *   insn=0x000000000028A668 string=0x000000000028A66C " "
 *   insn=0x000000000028A668 string=0x000000000028A674 "afA"
 *   insn=0x000000000028A670 string=0x00000000001FD530 "0'"
 *   insn=0x000000000028A67C string=0x000000000028A680 "h"
 *   insn=0x000000000028A680 string=0x000000000028A684 "!(("
 *   insn=0x000000000028A684 string=0x000000000028A688 "af"
 *   insn=0x000000000028A690 string=0x000000000028A694 "`^"
 *   insn=0x000000000028A694 string=0x000000000028A698 "(\n"
 *   insn=0x000000000028A698 string=0x000000000028A69C "t"
 *   insn=0x000000000028A698 string=0x000000000028A7DC "h"
 *   insn=0x000000000028A6B0 string=0x000000000028A6B4 "G"
 *   insn=0x000000000028A6CC string=0x00000000001F8E10 "0'"
 *   insn=0x000000000028A6D0 string=0x000000000028A6D4 "`"
 *   insn=0x000000000028A6E4 string=0x000000000028A6E8 "t"
 *   insn=0x000000000028A6F0 string=0x000000000028A7C0 "`^A"
 *   insn=0x000000000028A6F4 string=0x000000000028A6F8 "b"
 *   insn=0x000000000028A70C string=0x000000000028A710 "B"
 *   insn=0x000000000028A710 string=0x000000000028A714 "@ !"
 *   insn=0x000000000028A714 string=0x000000000028A718 ""
 *   insn=0x000000000028A724 string=0x000000000028A728 "b8""
 *   insn=0x000000000028A728 string=0x000000000028A72C "B"
 *   insn=0x000000000028A72C string=0x000000000028A730 "@ !"
 *   insn=0x000000000028A730 string=0x000000000028A734 "i"
 *   insn=0x000000000028A734 string=0x000000000028A760 "\th@"
 *   insn=0x000000000028A73C string=0x000000000028A740 "\t"
 *   insn=0x000000000028A750 string=0x000000000028A754 "`"
 *   insn=0x000000000028A754 string=0x000000000028A758 "t"
 *   insn=0x000000000028A758 string=0x000000000028A75C ""
 *   insn=0x000000000028A764 string=0x000000000028A768 "A"
 *   insn=0x000000000028A76C string=0x000000000028A770 "\t"
 *   insn=0x000000000028A774 string=0x000000000028A778 "`^A"
 *   insn=0x000000000028A77C string=0x000000000028A780 "%"
 *   insn=0x000000000028A790 string=0x000000000028A7A0 "t"
 *   insn=0x000000000028A794 string=0x000000000028A798 ""
 *   insn=0x000000000028A7A0 string=0x000000000028A7A4 "@"
 *   insn=0x000000000028A7A4 string=0x000000000028A7A8 ""
 *   insn=0x000000000028A7A8 string=0x000000000028A7AC ""
 *   insn=0x000000000028A7B0 string=0x000000000028A7B4 ""
 *   insn=0x000000000028A7B4 string=0x000000000028A7B8 ""
 *   insn=0x000000000028A7CC string=0x000000000028A7D0 "h"
 *   insn=0x000000000028A7D4 string=0x000000000028A7D8 "h"
 *   insn=0x000000000028A7DC string=0x000000000028A7E0 ""
 *   insn=0x000000000028A7E8 string=0x000000000028A7EC "a"
 *   insn=0x000000000028A7F8 string=0x000000000028A7FC "h"
 *   insn=0x000000000028A84C string=0x000000000028A850 " 8 "
 *   insn=0x000000000028A850 string=0x000000000028A854 "!A!"
 *   insn=0x000000000028A85C string=0x000000000028A860 "c!"
 *   insn=0x000000000028A860 string=0x000000000028A864 "$"
 *   insn=0x000000000028A868 string=0x000000000028A86C "B(#"
 *   insn=0x000000000028A874 string=0x000000000028A878 "@"
 *   insn=0x000000000028A878 string=0x000000000028A87C "!"
 *   insn=0x000000000028A888 string=0x000000000028A88C "@"
 *   insn=0x000000000028A88C string=0x000000000028A890 ""
 *   insn=0x000000000028A890 string=0x000000000028A894 ""
 *   insn=0x000000000028A898 string=0x000000000028A89C ""
 *   insn=0x000000000028A89C string=0x000000000028A8A0 ""
 *   insn=0x000000000028A8AC string=0x000000000028A8B0 "@"
 *   insn=0x000000000028A8B0 string=0x000000000028A8B4 ""
 *   insn=0x000000000028A8B4 string=0x000000000028A8B8 ""
 *   insn=0x000000000028A8BC string=0x000000000028A8C0 ""
 *   insn=0x000000000028A8C0 string=0x000000000028A8C4 ""
 *   insn=0x000000000028A8CC string=0x000000000028A8D0 "`^A"
 *   insn=0x000000000028A8DC string=0x000000000028A8E0 "("
 *   insn=0x000000000028A8F0 string=0x000000000028A8F4 "`"
 *   insn=0x000000000028A8F4 string=0x000000000028A8F8 "@"
 *   insn=0x000000000028A8F8 string=0x000000000028A8FC ""
 *   insn=0x000000000028A8FC string=0x000000000028A900 ""
 *   insn=0x000000000028A904 string=0x000000000028A908 ""
 *   insn=0x000000000028A904 string=0x000000000028A914 "t"
 *   insn=0x000000000028A908 string=0x000000000028A90C ""
 *   insn=0x000000000028A940 string=0x000000000028A944 " "
 *   insn=0x000000000028A948 string=0x000000000028A94C "g"
 *   insn=0x000000000028A94C string=0x000000000028A950 " "
 *   insn=0x000000000028A958 string=0x000000000028A95C "`^"
 *   insn=0x000000000028A95C string=0x000000000028A960 "`j"
 *   insn=0x000000000028A960 string=0x000000000028A964 "-"
 *   insn=0x000000000028A964 string=0x000000000028A968 "h"
 *   insn=0x000000000028A964 string=0x000000000028A9A8 "`bA"
 *   insn=0x000000000028A974 string=0x00000000001F67D0 "0'"
 *   insn=0x000000000028A978 string=0x000000000028A97C "!"
 *   insn=0x000000000028A988 string=0x000000000028A98C "a"
 *   insn=0x000000000028A98C string=0x000000000028A9B8 "F"
 *   insn=0x000000000028A9AC string=0x000000000028A9B0 "`b"
 *   insn=0x000000000028A9C0 string=0x000000000028A9C4 "("
 *   insn=0x000000000028A9C4 string=0x000000000028A9C8 "\t\t@"
 *   insn=0x000000000028A9C8 string=0x000000000028A9CC ")"
 *   insn=0x000000000028A9CC string=0x000000000028A9D0 "\t\t"
 *   insn=0x000000000028A9D4 string=0x000000000028A9D8 "\t"
 *   insn=0x000000000028A9D8 string=0x000000000028A9DC ")"
 *   insn=0x000000000028A9E0 string=0x000000000028A9E4 " "
 *   insn=0x000000000028A9EC string=0x000000000028A9F0 "W"
 *   insn=0x000000000028A9F8 string=0x00000000001F95D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::MagicHookshotComponent::CreateBlast(Caver::MagicHookshotComponent *this)
{
  Caver::SceneObject *v2; // x20
  int v3; // w8
  __int64 v4; // x0
  int v5; // w8
  void *v6; // x0
  __int64 v7; // x8
  Caver::SceneObject *v8; // x20
  __int64 v9; // x9
  int v10; // w9
  _DWORD *v11; // x8
  Caver::SceneObject *v12; // x0
  Caver::SceneObject *result; // x0
  int v14; // w8
  unsigned int *v15; // x8
  int v16; // w9
  __int64 v17; // [xsp+A8h] [xbp-58h] BYREF
  int v18; // [xsp+B0h] [xbp-50h]
  Caver::SceneObject *v19; // [xsp+C0h] [xbp-40h] BYREF
  _QWORD v20[3]; // [xsp+C8h] [xbp-38h] BYREF

  v20[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::SceneObject *)operator new(0x128u);
  Caver::SceneObject::SceneObject(v2);
  v3 = *((_DWORD *)v2 + 2);
  v19 = v2;
  *((_DWORD *)v2 + 2) = v3 + 1;
  sub_566BB8((int)v20, "particle_blast");
  Caver::ObjectLibrary::TemplateForName();
  Caver::SceneObject::InitWithTemplate(v2);
  v4 = v17;
  if ( v17 )
  {
    v5 = *(_DWORD *)(v17 + 8) - 1;
    *(_DWORD *)(v17 + 8) = v5;
    if ( !v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = (void *)(v20[0] - 24LL);
  if ( (__int64 *)(v20[0] - 24LL) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v20[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
      operator delete(v6);
  }
  v7 = *((_QWORD *)this + 5);
  v8 = v19;
  v9 = *(_QWORD *)(v7 + 112);
  LODWORD(v7) = *(_DWORD *)(v7 + 120);
  v17 = v9;
  v18 = v7;
  Caver::Vector2::Vector2((Caver::Vector2 *)v20, (const Caver::Vector3 *)&v17);
  if ( fabsf(*(float *)v20 - *((float *)v8 + 28)) <= 0.0001 )
  {
    v11 = (_DWORD *)((char *)v8 + 116);
    v12 = v8;
    if ( fabsf(*((float *)v20 + 1) - *((float *)v8 + 29)) <= 0.0001 )
      goto LABEL_11;
    v10 = HIDWORD(v20[0]);
  }
  else
  {
    v10 = HIDWORD(v20[0]);
    v11 = (_DWORD *)((char *)v8 + 116);
  }
  *((_DWORD *)v8 + 28) = v20[0];
  *v11 = v10;
  v12 = v8;
  if ( !*((_BYTE *)v8 + 180) )
  {
    Caver::SceneObject::RegisterForWorldBoundsUpdate(v8);
    *((_BYTE *)v8 + 180) = 1;
    v12 = v19;
  }
LABEL_11:
  *((_DWORD *)v8 + 30) = v18;
  Caver::SceneObject::SetInstanceScaling(v12, 1.5);
  (*(void (__fastcall **)(_QWORD, Caver::SceneObject **))(**(_QWORD **)(*((_QWORD *)this + 5) + 32LL) + 40LL))(
    *(_QWORD *)(*((_QWORD *)this + 5) + 32LL),
    &v19);
  result = v19;
  if ( v19 )
  {
    v14 = *((_DWORD *)v19 + 2) - 1;
    *((_DWORD *)v19 + 2) = v14;
    if ( !v14 )
      return (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

