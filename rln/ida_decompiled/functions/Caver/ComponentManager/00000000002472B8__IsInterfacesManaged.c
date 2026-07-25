/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002472B8
 * Mangled: _ZN5Caver16ComponentManager19IsInterfacesManagedEl
 * Demangled: Caver::ComponentManager::IsInterfacesManaged(long)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x00000000002472B8 string=0x00000000002472BC " "
 *   insn=0x00000000002472C0 string=0x00000000002472C4 "K"
 *   insn=0x00000000002472C8 string=0x00000000002472CC "l"
 *   insn=0x00000000002472CC string=0x00000000002472D0 "ma"
 *   insn=0x00000000002472D0 string=0x00000000002472D4 "nA"
 *   insn=0x00000000002472DC string=0x00000000002472E0 "J"
 *   insn=0x00000000002472E4 string=0x00000000002472E8 "+"
 *   insn=0x00000000002472E8 string=0x00000000002472EC "_"
 *   insn=0x00000000002472F0 string=0x00000000002472F4 "I"
 *   insn=0x00000000002472F0 string=0x0000000000247300 "?"
 *   insn=0x00000000002472F4 string=0x00000000002472F8 "?"
 *   insn=0x00000000002472F8 string=0x00000000002472FC "\t"
 *   insn=0x000000000024730C string=0x0000000000247310 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ComponentManager::IsInterfacesManaged(Caver::ComponentManager *this, __int64 a2)
{
  _QWORD *v2; // x11
  char *v3; // x8
  char *v4; // x9
  char *v5; // x10
  __int64 v6; // x12
  bool v7; // cc
  _QWORD *v8; // x12

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v3 = (char *)this + 8;
  v4 = (char *)this + 8;
  if ( v2 )
  {
    v5 = (char *)this + 8;
    do
    {
      v6 = v2[4];
      v7 = v6 < a2;
      if ( v6 >= a2 )
        v8 = v2 + 2;
      else
        v8 = v2 + 3;
      if ( !v7 )
        v5 = (char *)v2;
      v2 = (_QWORD *)*v8;
    }
    while ( *v8 );
    if ( v5 != v3 )
    {
      if ( *((_QWORD *)v5 + 4) <= a2 )
        v4 = v5;
      else
        v4 = (char *)this + 8;
    }
  }
  return v4 != v3;
}

