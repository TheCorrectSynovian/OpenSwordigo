/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201520
 * Mangled: ._ZN5Caver19ComponentCollection13PurgeInactiveEv
 * Demangled: Caver::ComponentCollection::PurgeInactive(void)
 *
 * Callers: 1
 *   0x00000000002471EC  Caver::ComponentManager::PurgeInactive(void)
 *
 * Callees: 1
 *   0x0000000000243D44  Caver::ComponentCollection::PurgeInactive(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201528 string=0x000000000020152C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ComponentCollection::PurgeInactive(Caver::ComponentCollection *this)
{
  return _ZN5Caver19ComponentCollection13PurgeInactiveEv(this);
}

