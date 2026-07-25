/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002471EC
 * Mangled: _ZN5Caver16ComponentManager13PurgeInactiveEv
 * Demangled: Caver::ComponentManager::PurgeInactive(void)
 *
 * Callers: 1
 *   0x00000000001F6D70  Caver::ComponentManager::PurgeInactive(void)
 *
 * Callees: 2
 *   0x0000000000201520  Caver::ComponentCollection::PurgeInactive(void)
 *   0x000000000054C640  sub_54C640
 *
 * Referenced strings: 3
 *   insn=0x0000000000247204 string=0x0000000000247208 "\n"
 *   insn=0x0000000000247204 string=0x0000000000247220 "`"
 *   insn=0x0000000000247220 string=0x0000000000247224 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentManager::PurgeInactive(__int64 this)
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
        Caver::ComponentCollection::PurgeInactive(v3);
      this = sub_54C640(v1);
      v1 = this;
    }
    while ( v2 != this );
  }
  return this;
}

