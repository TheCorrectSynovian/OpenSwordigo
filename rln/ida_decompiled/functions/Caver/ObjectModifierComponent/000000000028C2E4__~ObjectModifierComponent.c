/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028C2E4
 * Mangled: _ZN5Caver23ObjectModifierComponentD2Ev
 * Demangled: Caver::ObjectModifierComponent::~ObjectModifierComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000028C3FC  Caver::ObjectModifierComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x000000000028C2F0 string=0x000000000028C2F4 ""
 *   insn=0x000000000028C2F8 string=0x000000000028C2FC "`B@"
 *   insn=0x000000000028C2FC string=0x000000000028C300 "\n"
 *   insn=0x000000000028C300 string=0x000000000028C304 "\tA"
 *   insn=0x000000000028C304 string=0x000000000028C308 "@"
 *   insn=0x000000000028C308 string=0x000000000028C30C ""
 *   insn=0x000000000028C310 string=0x000000000028C314 "i"
 *   insn=0x000000000028C314 string=0x000000000028C318 "`"
 *   insn=0x000000000028C31C string=0x000000000028C320 "@"
 *   insn=0x000000000028C320 string=0x000000000028C324 ""
 *   insn=0x000000000028C324 string=0x000000000028C328 ""
 *   insn=0x000000000028C32C string=0x000000000028C330 ""
 *   insn=0x000000000028C330 string=0x000000000028C334 ""
 *   insn=0x000000000028C344 string=0x000000000028C348 "b"
 *   insn=0x000000000028C348 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000028C350 string=0x000000000028C354 "_"
 *   insn=0x000000000028C358 string=0x000000000028C35C "Z"
 *   insn=0x000000000028C370 string=0x000000000028C374 ""
 *   insn=0x000000000028C378 string=0x000000000028C37C "`B@"
 *   insn=0x000000000028C37C string=0x000000000028C380 "\n"
 *   insn=0x000000000028C380 string=0x000000000028C384 "\tA"
 *   insn=0x000000000028C384 string=0x000000000028C388 "@"
 *   insn=0x000000000028C388 string=0x000000000028C38C ""
 *   insn=0x000000000028C390 string=0x000000000028C394 "i"
 *   insn=0x000000000028C394 string=0x000000000028C398 "`"
 *   insn=0x000000000028C39C string=0x000000000028C3A0 "@"
 *   insn=0x000000000028C3A0 string=0x000000000028C3A4 ""
 *   insn=0x000000000028C3A4 string=0x000000000028C3A8 ""
 *   insn=0x000000000028C3AC string=0x000000000028C3B0 ""
 *   insn=0x000000000028C3B0 string=0x000000000028C3B4 ""
 *   insn=0x000000000028C3BC string=0x000000000028C3C0 "D"
 *   insn=0x000000000028C3D0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000028C3D8 string=0x000000000028C3DC "="
 *   insn=0x000000000028C3F4 string=0x000000000028C3F8 "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectModifierComponent::~ObjectModifierComponent(Caver::ObjectModifierComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 16);
  *(_QWORD *)&v3 = &off_6C0E08;
  *((_QWORD *)&v3 + 1) = &off_6C0E48;
  *(_QWORD *)this = off_6C0CF0;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Caver::Component::~Component(this);
}

