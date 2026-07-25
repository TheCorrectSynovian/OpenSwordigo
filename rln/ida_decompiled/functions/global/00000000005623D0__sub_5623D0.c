/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005623D0
 * Mangled: sub_5623D0
 * Demangled: sub_5623D0
 *
 * Callers: 2
 *   0x00000000005626E4  sub_5626E4
 *   0x00000000005628F0  sub_5628F0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000005623E8 string=0x00000000005623EC "B"
 *   insn=0x00000000005623EC string=0x00000000005623F0 "B"
 *   insn=0x00000000005623F0 string=0x00000000005623F4 "@"
 *   insn=0x0000000000562400 string=0x0000000000562404 "`\n@"
 *   insn=0x0000000000562400 string=0x0000000000562420 "cf@"
 *   insn=0x0000000000562404 string=0x0000000000562408 "a"
 *   insn=0x0000000000562420 string=0x0000000000562424 "b\n@"
 *   insn=0x0000000000562424 string=0x0000000000562428 "d"
 *   insn=0x000000000056242C string=0x0000000000562430 "e"
 *   insn=0x0000000000562430 string=0x0000000000562434 "D"
 *   insn=0x0000000000562434 string=0x0000000000562438 "cr@"
 *   insn=0x0000000000562438 string=0x000000000056243C "bj@"
 *   insn=0x0000000000562448 string=0x000000000056244C "bv@"
 *   insn=0x000000000056244C string=0x0000000000562450 "aj@"
 *   insn=0x0000000000562450 string=0x0000000000562454 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5623D0(__int64 a1, __int64 a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 200) + 48LL))(*(_QWORD *)(a1 + 200)) )
    return (*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 24)) >> 2;
  else
    return (unsigned int)*(_QWORD *)(a1 + 208)
         + (*(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 200) + 56LL))(
             *(_QWORD *)(a1 + 200),
             a2,
             *(_QWORD *)(a1 + 208),
             *(_QWORD *)(a1 + 224),
             (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) >> 2)
         - (unsigned int)*(_QWORD *)(a1 + 232);
}

