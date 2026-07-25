/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566294
 * Mangled: sub_566294
 * Demangled: sub_566294
 *
 * Callers: 1
 *   0x00000000005663A0  sub_5663A0
 *
 * Callees: 2
 *   0x0000000000201760  .memcpy
 *   0x0000000000565330  sub_565330
 *
 * Referenced strings: 7
 *   insn=0x00000000005662A4 string=0x00000000005662A8 "5"
 *   insn=0x00000000005662AC string=0x000000000059F8E0 "not enough space for format expansion (Please submit full bug report at http://gcc.gnu.org/bugs.html):\n    "
 *   insn=0x00000000005662B4 string=0x00000000005662B8 "!"
 *   insn=0x00000000005662C0 string=0x00000000005662C4 "'m"
 *   insn=0x00000000005662D8 string=0x00000000005662DC "_` "
 *   insn=0x00000000005662DC string=0x00000000005662E0 "b"
 *   insn=0x0000000000566304 string=0x0000000000566308 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_566294(const void *a1, __int64 a2)
{
  size_t v2; // x21
  void *v4; // x0
  __int64 v5; // [xsp+0h] [xbp+0h] BYREF
  _BYTE v6[59]; // [xsp+30h] [xbp+30h] BYREF
  char v7; // [xsp+6Bh] [xbp+6Bh] BYREF

  v2 = a2 - (_QWORD)a1;
  v4 = memcpy(
         v6,
         "not enough space for format expansion (Please submit full bug report at http://gcc.gnu.org/bugs.html):\n    ",
         0x6Cu);
  memcpy(&v5, v4, 0x6Bu);
  memcpy(&v7, a1, v2);
  v6[v2 + 59] = 0;
  sub_565330((char *)&v5);
}

