/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051F31C
 * Mangled: sub_51F31C
 * Demangled: sub_51F31C
 *
 * Callers: 2
 *   0x000000000051F550  sub_51F550
 *   0x000000000051F5E8  sub_51F5E8
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x000000000051F328 string=0x000000000051F32C "i"
 *   insn=0x000000000051F338 string=0x000000000051F340 " H`8a"
 *   insn=0x000000000051F340 string=0x000000000051F344 "a"
 *   insn=0x000000000051F344 string=0x000000000051F348 " "
 *   insn=0x000000000051F350 string=0x000000000059D138 "ab"
 *   insn=0x000000000051F35C string=0x000000000059D128 "a+"
 *   insn=0x000000000051F368 string=0x000000000059D110 "a+b"
 *   insn=0x000000000051F374 string=0x000000000059D130 "wb"
 *   insn=0x000000000051F380 string=0x000000000059D108 "a"
 *   insn=0x000000000051F38C string=0x000000000059D100 "w"
 *   insn=0x000000000051F398 string=0x000000000059D140 "rb"
 *   insn=0x000000000051F3A4 string=0x000000000059D150 "w+b"
 *   insn=0x000000000051F3B0 string=0x000000000059D118 "r+"
 *   insn=0x000000000051F3BC string=0x000000000059D148 "r+b"
 *   insn=0x000000000051F3C8 string=0x000000000059D120 "w+"
 *   insn=0x000000000051F3D4 string=0x000000000059EF20 "r"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_51F31C(char a1)
{
  char *result; // x0

  switch ( a1 & 0x3D )
  {
    case 1:
    case 0x11:
      result = (char *)&unk_59D108;
      break;
    case 5:
    case 0x15:
      result = (char *)&unk_59D138;
      break;
    case 8:
      result = "r";
      break;
    case 9:
    case 0x19:
      result = (char *)&unk_59D128;
      break;
    case 0xC:
      result = (char *)&unk_59D140;
      break;
    case 0xD:
    case 0x1D:
      result = (char *)&off_59D110;
      break;
    case 0x10:
    case 0x30:
      result = (char *)&unk_59D100;
      break;
    case 0x14:
    case 0x34:
      result = (char *)&unk_59D130;
      break;
    case 0x18:
      result = (char *)&unk_59D118;
      break;
    case 0x1C:
      result = (char *)&off_59D148;
      break;
    case 0x38:
      result = (char *)&unk_59D120;
      break;
    case 0x3C:
      result = (char *)&off_59D150;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

