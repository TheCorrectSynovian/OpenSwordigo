/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024719C
 * Mangled: _ZN5Caver16ComponentManager5PurgeEv
 * Demangled: Caver::ComponentManager::Purge(void)
 *
 * Callers: 1
 *   0x00000000001FA0B0  Caver::ComponentManager::Purge(void)
 *
 * Callees: 2
 *   0x0000000000200D70  Caver::ComponentCollection::Purge(void)
 *   0x000000000054C640  sub_54C640
 *
 * Referenced strings: 4
 *   insn=0x00000000002471B4 string=0x00000000002471B8 "\n"
 *   insn=0x00000000002471B4 string=0x00000000002471D0 "`"
 *   insn=0x00000000002471BC string=0x00000000002471C0 " "
 *   insn=0x00000000002471D0 string=0x00000000002471D4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentManager::Purge(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  Caver::ComponentCollection *v3; // x0

  v1 = *(_QWORD *)(this + 72);
  v2 = this + 56;
  if ( this + 56 != v1 )
  {
    do
    {
      v3 = *(Caver::ComponentCollection **)(v1 + 40);
      if ( v3 )
        Caver::ComponentCollection::Purge(v3);
      this = sub_54C640(v1);
      v1 = this;
    }
    while ( v2 != this );
  }
  return this;
}

