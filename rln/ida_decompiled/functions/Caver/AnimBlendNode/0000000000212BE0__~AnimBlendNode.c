/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000212BE0
 * Mangled: _ZN5Caver13AnimBlendNodeD2Ev
 * Demangled: Caver::AnimBlendNode::~AnimBlendNode()
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 50
 *   insn=0x0000000000212BF0 string=0x0000000000212BF4 "`"
 *   insn=0x0000000000212BF4 string=0x0000000000212BF8 ""
 *   insn=0x0000000000212BF8 string=0x0000000000212BFC "A"
 *   insn=0x0000000000212BFC string=0x0000000000212C00 "h"
 *   insn=0x0000000000212C04 string=0x0000000000212C08 "@"
 *   insn=0x0000000000212C04 string=0x0000000000212C24 "`\n@"
 *   insn=0x0000000000212C08 string=0x0000000000212C0C ""
 *   insn=0x0000000000212C0C string=0x0000000000212C10 ""
 *   insn=0x0000000000212C14 string=0x0000000000212C18 ""
 *   insn=0x0000000000212C18 string=0x0000000000212C1C ""
 *   insn=0x0000000000212C28 string=0x0000000000212C2C "@"
 *   insn=0x0000000000212C2C string=0x0000000000212C30 ""
 *   insn=0x0000000000212C30 string=0x0000000000212C34 ""
 *   insn=0x0000000000212C38 string=0x0000000000212C3C ""
 *   insn=0x0000000000212C3C string=0x0000000000212C40 ""
 *   insn=0x0000000000212C5C string=0x0000000000212C60 "h\n@"
 *   insn=0x0000000000212C64 string=0x0000000000212C68 "("
 *   insn=0x0000000000212C68 string=0x0000000000212C6C "\t\t@"
 *   insn=0x0000000000212C6C string=0x0000000000212C70 ")"
 *   insn=0x0000000000212C70 string=0x0000000000212C74 "\t\t"
 *   insn=0x0000000000212C78 string=0x0000000000212C7C "\t"
 *   insn=0x0000000000212C7C string=0x0000000000212C80 ")"
 *   insn=0x0000000000212C84 string=0x0000000000212C88 " "
 *   insn=0x0000000000212C8C string=0x0000000000212C90 ""
 *   insn=0x0000000000212CA8 string=0x0000000000212CAC "`"
 *   insn=0x0000000000212CAC string=0x0000000000212CB0 ""
 *   insn=0x0000000000212CB0 string=0x0000000000212CB4 "A"
 *   insn=0x0000000000212CB4 string=0x0000000000212CB8 "h"
 *   insn=0x0000000000212CBC string=0x0000000000212CC0 "@"
 *   insn=0x0000000000212CBC string=0x0000000000212CDC "`\n@"
 *   insn=0x0000000000212CC0 string=0x0000000000212CC4 ""
 *   insn=0x0000000000212CC4 string=0x0000000000212CC8 ""
 *   insn=0x0000000000212CCC string=0x0000000000212CD0 ""
 *   insn=0x0000000000212CD0 string=0x0000000000212CD4 ""
 *   insn=0x0000000000212CE0 string=0x0000000000212CE4 "@"
 *   insn=0x0000000000212CE4 string=0x0000000000212CE8 ""
 *   insn=0x0000000000212CE8 string=0x0000000000212CEC ""
 *   insn=0x0000000000212CF0 string=0x0000000000212CF4 ""
 *   insn=0x0000000000212CF4 string=0x0000000000212CF8 ""
 *   insn=0x0000000000212D08 string=0x0000000000212D0C "i"
 *   insn=0x0000000000212D0C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000212D1C string=0x0000000000212D20 "("
 *   insn=0x0000000000212D20 string=0x0000000000212D24 "\t\t@"
 *   insn=0x0000000000212D24 string=0x0000000000212D28 ")"
 *   insn=0x0000000000212D28 string=0x0000000000212D2C "\t\t"
 *   insn=0x0000000000212D30 string=0x0000000000212D34 "\t"
 *   insn=0x0000000000212D34 string=0x0000000000212D38 ")"
 *   insn=0x0000000000212D3C string=0x0000000000212D40 " "
 *   insn=0x0000000000212D44 string=0x0000000000212D48 "Z"
 *   insn=0x0000000000212D50 string=0x0000000000212D54 "~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AnimBlendNode::~AnimBlendNode(Caver::AnimBlendNode *this)
{
  _DWORD *v2; // x0
  int v3; // w8
  _DWORD *v4; // x0
  int v5; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 3);
  *(_QWORD *)this = off_6B9170;
  if ( v2 )
  {
    v3 = v2[2] - 1;
    v2[2] = v3;
    if ( !v3 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v4 = (_DWORD *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    v5 = v4[2] - 1;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  }
}

