/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4CE0
 * Mangled: ._ZN5Caver12ProgramState7PushIntEi
 * Demangled: Caver::ProgramState::PushInt(int)
 *
 * Callers: 11
 *   0x00000000002696F0  sub_2696F0
 *   0x000000000026CDE4  sub_26CDE4
 *   0x000000000026CE60  sub_26CE60
 *   0x000000000026DE08  sub_26DE08
 *   0x0000000000271810  sub_271810
 *   0x00000000002718F0  sub_2718F0
 *   0x0000000000271B10  sub_271B10
 *   0x0000000000279E68  sub_279E68
 *   0x000000000035CF2C  sub_35CF2C
 *   0x000000000035DC24  sub_35DC24
 *   0x00000000004D623C  sub_4D623C
 *
 * Callees: 1
 *   0x00000000004C1A84  Caver::ProgramState::PushInt(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4CE8 string=0x00000000001F4CEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::PushInt(Caver::ProgramState *this, int a2)
{
  return _ZN5Caver12ProgramState7PushIntEi(this, a2);
}

