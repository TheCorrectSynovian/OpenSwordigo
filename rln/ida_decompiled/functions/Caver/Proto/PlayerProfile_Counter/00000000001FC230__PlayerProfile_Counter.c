/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC230
 * Mangled: ._ZN5Caver5Proto21PlayerProfile_CounterC2Ev
 * Demangled: Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter(void)
 *
 * Callers: 1
 *   0x00000000003C0F08  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *
 * Callees: 1
 *   0x00000000002E8AEC  Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC238 string=0x00000000001FC23C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter(
        Caver::Proto::PlayerProfile_Counter *this)
{
  return _ZN5Caver5Proto21PlayerProfile_CounterC2Ev(this);
}

