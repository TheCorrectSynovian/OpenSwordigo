/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000274E18
 * Mangled: _ZNSt11_Deque_baseIN5Caver19HeroEntityComponent12SafePositionESaIS2_EE17_M_initialize_mapEm
 * Demangled: std::_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_initialize_map(ulong)
 *
 * Callers: 1
 *   0x00000000001F3B70  std::_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_initialize_map(ulong)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB870  std::_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_create_nodes(Caver::HeroEntityComponent::SafePosition**,Caver::HeroEntityComponent::SafePosition**)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x0000000000274E30 string=0x0000000000274E34 "hU"
 *   insn=0x0000000000274E48 string=0x0000000000274E4C ""
 *   insn=0x0000000000274E50 string=0x0000000000274E54 "\t"
 *   insn=0x0000000000274E54 string=0x0000000000274E58 "h"
 *   insn=0x0000000000274E58 string=0x0000000000274E5C "i"
 *   insn=0x0000000000274E68 string=0x0000000000274E6C "h"
 *   insn=0x0000000000274E68 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000274E6C string=0x0000000000274E70 "`"
 *   insn=0x0000000000274E70 string=0x0000000000274E74 ""
 *   insn=0x0000000000274E74 string=0x0000000000274E78 ""
 *   insn=0x0000000000274E78 string=0x0000000000274E7C ""
 *   insn=0x0000000000274E90 string=0x0000000000274E94 "w"
 *   insn=0x0000000000274E94 string=0x00000000001FB870 "0'"
 *   insn=0x0000000000274E9C string=0x0000000000274EA0 "i&"
 *   insn=0x0000000000274EA4 string=0x0000000000274EA8 "\t"
 *   insn=0x0000000000274EA8 string=0x0000000000274EAC "h""
 *   insn=0x0000000000274EAC string=0x0000000000274EB0 "iZ"
 *   insn=0x0000000000274EBC string=0x0000000000274EC0 ""
 *   insn=0x0000000000274EC0 string=0x0000000000274EC4 ","
 *   insn=0x0000000000274EC4 string=0x0000000000274EC8 "J%"
 *   insn=0x0000000000274EC8 string=0x0000000000274ECC "j&"
 *   insn=0x0000000000274ECC string=0x0000000000274ED0 "l""
 *   insn=0x0000000000274EEC string=0x0000000000274EF0 "`"
 *   insn=0x0000000000274EEC string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000274EF4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000274F04 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000274F08 string=0x0000000000274F0C "n2"
 *   insn=0x0000000000274F64 string=0x0000000000274F68 "`"
 *   insn=0x0000000000274F84 string=0x0000000000274F88 "O2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Deque_base<Caver::HeroEntityComponent::SafePosition>::_M_initialize_map(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // x23
  unsigned __int64 v4; // x8
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 *v8; // x22
  __int64 *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x9

  v3 = a2 / 0xC;
  v4 = a2 / 0xC + 3;
  if ( v4 <= 8 )
    v4 = 8;
  a1[1] = v4;
  if ( v4 >> 61 )
    sub_565294();
  v6 = operator new(8 * v4);
  v7 = a1[1];
  *a1 = v6;
  v8 = (__int64 *)(v6 + ((4 * (v7 - (v3 + 1))) & 0xFFFFFFFFFFFFFFF8LL));
  v9 = &v8[v3 + 1];
  std::_Deque_base<Caver::HeroEntityComponent::SafePosition>::_M_create_nodes();
  v10 = *v8;
  a1[9] = (__int64)(v9 - 1);
  a1[2] = v10;
  a1[3] = v10;
  a1[4] = v10 + 480;
  a1[5] = (__int64)v8;
  v11 = *(v9 - 1);
  a1[6] = v11 + 40 * (a2 - 12 * v3);
  a1[7] = v11;
  a1[8] = v11 + 480;
}

