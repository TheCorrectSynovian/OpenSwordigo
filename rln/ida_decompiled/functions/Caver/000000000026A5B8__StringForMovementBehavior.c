/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026A5B8
 * Mangled: _ZN5Caver25StringForMovementBehaviorENS_25EntityControllerComponent16MovementBehaviorE
 * Demangled: Caver::StringForMovementBehavior(Caver::EntityControllerComponent::MovementBehavior)
 *
 * Callers: 1
 *   0x00000000001F7770  Caver::StringForMovementBehavior(Caver::EntityControllerComponent::MovementBehavior)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005689E0  sub_5689E0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x000000000026A5C4 string=0x000000000026A5C8 "S"
 *   insn=0x000000000026A5C8 string=0x000000000026A5CC "i"
 *   insn=0x000000000026A5D4 string=0x000000000026A5D8 " "
 *   insn=0x000000000026A5DC string=0x000000000026A5E0 " "
 *   insn=0x000000000026A5E4 string=0x000000000026A5E8 "a"
 *   insn=0x000000000026A5EC string=0x000000000058804E "roam"
 *   insn=0x000000000026A5F8 string=0x000000000026A5FC "o"
 *   insn=0x000000000026A600 string=0x000000000026A648 "h"
 *   insn=0x000000000026A604 string=0x0000000000588053 "follow"
 *   insn=0x000000000026A610 string=0x000000000026A614 "i"
 *   insn=0x000000000026A61C string=0x000000000058805A "fight"
 *   insn=0x000000000026A628 string=0x000000000026A62C "c"
 *   insn=0x000000000026A634 string=0x0000000000583AEC "none"
 *   insn=0x000000000026A640 string=0x000000000026A644 "]"
 *   insn=0x000000000026A668 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026A6A8 string=0x000000000026A6AC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::StringForMovementBehavior@<X0>(int a1@<W0>, int a2@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  switch ( a1 )
  {
    case 3:
      return sub_566BB8(a2, "fight");
    case 2:
      return sub_566BB8(a2, "follow");
    case 1:
      return sub_566BB8(a2, "roam");
  }
  return sub_566BB8(a2, "none");
}

