/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B504C
 * Mangled: _ZN5Caver17LastPathComponentERKSs
 * Demangled: Caver::LastPathComponent(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F47F0  Caver::LastPathComponent(std::string const&)
 *
 * Callees: 4
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000566784  sub_566784
 *   0x0000000000568288  sub_568288
 *   0x000000000056A528  sub_56A528
 *
 * Referenced strings: 13
 *   insn=0x00000000004B505C string=0x00000000004B5060 "h"
 *   insn=0x00000000004B5064 string=0x0000000000593EEE "/"
 *   insn=0x00000000004B506C string=0x00000000004B5070 "\t"
 *   insn=0x00000000004B5070 string=0x00000000004B5074 "*"
 *   insn=0x00000000004B5074 string=0x00000000004B5078 ""
 *   insn=0x00000000004B507C string=0x00000000004B5080 "("
 *   insn=0x00000000004B5090 string=0x00000000004B50A8 "h"
 *   insn=0x00000000004B50A0 string=0x00000000004B50A4 "!"
 *   insn=0x00000000004B50B0 string=0x00000000004B50B4 ""
 *   insn=0x00000000004B50DC string=0x0000000000595C57 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x00000000004B50E0 string=0x0000000000595C42 "basic_string::substr"
 *   insn=0x00000000004B50E4 string=0x00000000004B50E8 "!1"
 *   insn=0x00000000004B50E8 string=0x00000000004B50EC "r"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::LastPathComponent@<X0>(_QWORD *a1@<X0>, __int64 a2@<X8>)
{
  int v4; // w9
  int v5; // w8
  __int64 v6; // x0

  v4 = *(_DWORD *)(*a1 - 24LL);
  if ( *(_BYTE *)(*a1 + v4 - 1) == 47 )
    v5 = *(_DWORD *)(*a1 - 24LL);
  else
    v5 = v4 - 1;
  v6 = sub_568288((int)a1, "/", v5, 1u);
  if ( (_DWORD)v6 == -1 )
    return sub_56A528(a2, a1);
  if ( *(_QWORD *)(*a1 - 24LL) < (unsigned __int64)(((v6 << 32) + 0x100000000LL) >> 32) )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr");
  return sub_566784(a2, a1);
}

