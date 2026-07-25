/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024723C
 * Mangled: _ZN5Caver16ComponentManager26RegisterComponentInterfaceElPNS_9ComponentE
 * Demangled: Caver::ComponentManager::RegisterComponentInterface(long,Caver::Component *)
 *
 * Callers: 1
 *   0x0000000000201E30  Caver::ComponentManager::RegisterComponentInterface(long,Caver::Component *)
 *
 * Callees: 2
 *   0x00000000001F9590  Caver::ComponentCollection::AddComponent(Caver::Component *)
 *   0x00000000001FE780  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *
 * Referenced strings: 17
 *   insn=0x0000000000247244 string=0x0000000000247248 "\n@"
 *   insn=0x0000000000247248 string=0x000000000024724C " "
 *   insn=0x0000000000247254 string=0x0000000000247258 "*"
 *   insn=0x0000000000247258 string=0x000000000024725C "K"
 *   insn=0x0000000000247258 string=0x000000000024727C "?"
 *   insn=0x000000000024725C string=0x0000000000247260 "La"
 *   insn=0x0000000000247260 string=0x0000000000247264 "MA"
 *   insn=0x000000000024726C string=0x0000000000247270 ")"
 *   insn=0x0000000000247270 string=0x0000000000247274 "j"
 *   insn=0x0000000000247274 string=0x0000000000247278 "*"
 *   insn=0x000000000024727C string=0x0000000000247280 "`"
 *   insn=0x0000000000247280 string=0x0000000000247284 "*"
 *   insn=0x0000000000247284 string=0x0000000000247288 "_"
 *   insn=0x0000000000247288 string=0x000000000024728C "\t"
 *   insn=0x000000000024728C string=0x0000000000247290 "?"
 *   insn=0x0000000000247294 string=0x0000000000247298 ":"
 *   insn=0x00000000002472A8 string=0x00000000001F9590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ComponentManager::RegisterComponentInterface(
        Caver::ComponentManager *this,
        __int64 a2,
        Caver::Component *a3)
{
  _QWORD *v3; // x10
  char *v4; // x8
  char *v5; // x9
  __int64 v6; // x11
  bool v7; // cc
  _QWORD *v8; // x11

  v3 = (_QWORD *)*((_QWORD *)this + 2);
  v4 = (char *)this + 8;
  v5 = (char *)this + 8;
  if ( v3 )
  {
    do
    {
      v6 = v3[4];
      v7 = v6 < a2;
      if ( v6 >= a2 )
        v8 = v3 + 2;
      else
        v8 = v3 + 3;
      if ( !v7 )
        v5 = (char *)v3;
      v3 = (_QWORD *)*v8;
    }
    while ( *v8 );
  }
  if ( v5 != v4 )
  {
    if ( *((_QWORD *)v5 + 4) > a2 )
      v5 = (char *)this + 8;
    if ( v5 != v4 )
    {
      Caver::ComponentManager::ComponentCollectionForInterface(this, a2);
      Caver::ComponentCollection::AddComponent();
    }
  }
}

