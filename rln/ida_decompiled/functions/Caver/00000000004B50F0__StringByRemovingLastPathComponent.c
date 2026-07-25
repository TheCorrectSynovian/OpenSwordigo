/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B50F0
 * Mangled: _ZN5Caver33StringByRemovingLastPathComponentERKSs
 * Demangled: Caver::StringByRemovingLastPathComponent(std::string const&)
 *
 * Callers: 1
 *   0x0000000000202210  Caver::StringByRemovingLastPathComponent(std::string const&)
 *
 * Callees: 2
 *   0x0000000000566784  sub_566784
 *   0x0000000000568288  sub_568288
 *
 * Referenced strings: 10
 *   insn=0x00000000004B5108 string=0x0000000000593EEE "/"
 *   insn=0x00000000004B5110 string=0x00000000004B5114 "\t"
 *   insn=0x00000000004B5114 string=0x00000000004B5118 "*"
 *   insn=0x00000000004B5118 string=0x00000000004B511C ""
 *   insn=0x00000000004B5120 string=0x00000000004B5124 "("
 *   insn=0x00000000004B5128 string=0x00000000004B512C "W"
 *   insn=0x00000000004B512C string=0x00000000004B5130 "|`"
 *   insn=0x00000000004B5140 string=0x00000000004B5144 ""
 *   insn=0x00000000004B5144 string=0x00000000004B5148 "a"
 *   insn=0x00000000004B5148 string=0x00000000004B514C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::StringByRemovingLastPathComponent@<X0>(_QWORD *a1@<X0>, _QWORD *a2@<X8>)
{
  int v4; // w9
  int v5; // w8
  __int64 result; // x0

  v4 = *(_DWORD *)(*a1 - 24LL);
  if ( *(_BYTE *)(*a1 + v4 - 1) == 47 )
    v5 = *(_DWORD *)(*a1 - 24LL);
  else
    v5 = v4 - 1;
  result = sub_568288((int)a1, "/", v5, 1u);
  if ( result << 32 != 0xFFFFFFFF00000000LL )
    return sub_566784(a2, a1);
  *a2 = &byte_6FD2F8;
  return result;
}

