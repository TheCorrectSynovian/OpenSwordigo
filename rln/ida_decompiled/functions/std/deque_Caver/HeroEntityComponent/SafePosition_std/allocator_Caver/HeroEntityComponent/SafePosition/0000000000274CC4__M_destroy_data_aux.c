/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000274CC4
 * Mangled: _ZNSt5dequeIN5Caver19HeroEntityComponent12SafePositionESaIS2_EE19_M_destroy_data_auxESt15_Deque_iteratorIS2_RS2_PS2_ES8_
 * Demangled: std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_destroy_data_aux(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *
 * Callers: 2
 *   0x0000000000201C20  std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_destroy_data_aux(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *   0x0000000000274B68  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_create_node(std::pair<std::string const,int> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 28
 *   insn=0x0000000000274CE0 string=0x0000000000274CE4 "h"
 *   insn=0x0000000000274CE4 string=0x0000000000274CE8 "5!"
 *   insn=0x0000000000274D00 string=0x0000000000274D04 "@"
 *   insn=0x0000000000274D04 string=0x0000000000274D08 ""
 *   insn=0x0000000000274D08 string=0x0000000000274D0C ""
 *   insn=0x0000000000274D10 string=0x0000000000274D14 ""
 *   insn=0x0000000000274D14 string=0x0000000000274D18 ""
 *   insn=0x0000000000274D28 string=0x0000000000274D2C "h"
 *   insn=0x0000000000274D40 string=0x0000000000274D44 "?"
 *   insn=0x0000000000274D48 string=0x0000000000274DC8 "s"
 *   insn=0x0000000000274D54 string=0x0000000000274D88 "tN@"
 *   insn=0x0000000000274D5C string=0x0000000000274D60 "@"
 *   insn=0x0000000000274D60 string=0x0000000000274D64 ""
 *   insn=0x0000000000274D64 string=0x0000000000274D68 ""
 *   insn=0x0000000000274D6C string=0x0000000000274D70 ""
 *   insn=0x0000000000274D70 string=0x0000000000274D74 ""
 *   insn=0x0000000000274D90 string=0x0000000000274D94 "`\n@"
 *   insn=0x0000000000274D98 string=0x0000000000274D9C "@"
 *   insn=0x0000000000274D98 string=0x0000000000274DB8 "s"
 *   insn=0x0000000000274D9C string=0x0000000000274DA0 ""
 *   insn=0x0000000000274DA0 string=0x0000000000274DA4 ""
 *   insn=0x0000000000274DA8 string=0x0000000000274DAC ""
 *   insn=0x0000000000274DAC string=0x0000000000274DB0 ""
 *   insn=0x0000000000274DD8 string=0x0000000000274DDC "@"
 *   insn=0x0000000000274DDC string=0x0000000000274DE0 ""
 *   insn=0x0000000000274DE0 string=0x0000000000274DE4 ""
 *   insn=0x0000000000274DE8 string=0x0000000000274DEC ""
 *   insn=0x0000000000274DEC string=0x0000000000274DF0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::deque<Caver::HeroEntityComponent::SafePosition>::_M_destroy_data_aux(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // x9
  unsigned __int64 v6; // x8
  __int64 *v7; // x21
  __int64 v8; // x22
  __int64 i; // x23
  _DWORD *v10; // x0
  int v11; // w8
  __int64 v12; // x21
  __int64 k; // x20
  _DWORD *v14; // x0
  int v15; // w8
  __int64 m; // x19
  __int64 v17; // x20
  _DWORD *v18; // x0
  int v19; // w8
  __int64 j; // x19
  _DWORD *v21; // x0
  int v22; // w8

  v5 = a2[3];
  v6 = a3[3];
  v7 = (__int64 *)(v5 + 8);
  if ( v5 + 8 < v6 )
  {
    do
    {
      v8 = *v7;
      for ( i = 16; i != 496; i += 40 )
      {
        v10 = *(_DWORD **)(v8 + i);
        if ( v10 )
        {
          v11 = v10[2] - 1;
          v10[2] = v11;
          if ( !v11 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
        }
      }
      v6 = a3[3];
      ++v7;
    }
    while ( (unsigned __int64)v7 < v6 );
    v5 = a2[3];
  }
  v12 = *a2;
  if ( v5 == v6 )
  {
    for ( j = *a3; j != v12; v12 += 40 )
    {
      v21 = *(_DWORD **)(v12 + 16);
      if ( v21 )
      {
        v22 = v21[2] - 1;
        v21[2] = v22;
        if ( !v22 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v21 + 8LL))(v21);
      }
    }
  }
  else
  {
    for ( k = a2[2]; k != v12; v12 += 40 )
    {
      v14 = *(_DWORD **)(v12 + 16);
      if ( v14 )
      {
        v15 = v14[2] - 1;
        v14[2] = v15;
        if ( !v15 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
    v17 = *a3;
    for ( m = a3[1]; v17 != m; m += 40 )
    {
      v18 = *(_DWORD **)(m + 16);
      if ( v18 )
      {
        v19 = v18[2] - 1;
        v18[2] = v19;
        if ( !v19 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
  }
}

