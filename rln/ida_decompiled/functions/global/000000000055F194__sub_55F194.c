/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055F194
 * Mangled: sub_55F194
 * Demangled: sub_55F194
 *
 * Callers: 2
 *   0x000000000055FB8C  sub_55FB8C
 *   0x000000000055FDB4  sub_55FDB4
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x000000000055F1AC string=0x000000000055F1B0 "B"
 *   insn=0x000000000055F1B0 string=0x000000000055F1B4 "B"
 *   insn=0x000000000055F1B4 string=0x000000000055F1B8 "@"
 *   insn=0x000000000055F1C4 string=0x000000000055F1C8 "`\n@"
 *   insn=0x000000000055F1C4 string=0x000000000055F1E0 "bf@"
 *   insn=0x000000000055F1C8 string=0x000000000055F1CC "a"
 *   insn=0x000000000055F1E0 string=0x000000000055F1E4 "c"
 *   insn=0x000000000055F1E4 string=0x000000000055F1E8 "d\n@"
 *   insn=0x000000000055F1EC string=0x000000000055F1F0 "E"
 *   insn=0x000000000055F1F4 string=0x000000000055F1F8 "bj@"
 *   insn=0x000000000055F1F8 string=0x000000000055F1FC "cr@"
 *   insn=0x000000000055F204 string=0x000000000055F208 "bv@"
 *   insn=0x000000000055F208 string=0x000000000055F20C "aj@"
 *   insn=0x000000000055F20C string=0x000000000055F210 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55F194(__int64 a1, __int64 a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 200) + 48LL))(*(_QWORD *)(a1 + 200)) )
    return (unsigned int)*(_QWORD *)(a1 + 16) - (unsigned int)*(_QWORD *)(a1 + 24);
  else
    return (unsigned int)*(_QWORD *)(a1 + 208)
         + (*(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 200) + 56LL))(
             *(_QWORD *)(a1 + 200),
             a2,
             *(_QWORD *)(a1 + 208),
             *(_QWORD *)(a1 + 224),
             *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8))
         - (unsigned int)*(_QWORD *)(a1 + 232);
}

