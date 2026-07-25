/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AD294
 * Mangled: _ZN5Caver14CharacterState14GetItemsOfTypeENS_8ItemTypeEPSt6vectorIN5boost10shared_ptrINS_4ItemEEESaIS6_EE
 * Demangled: Caver::CharacterState::GetItemsOfType(Caver::ItemType,std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>> *)
 *
 * Callers: 1
 *   0x00000000001F3590  Caver::CharacterState::GetItemsOfType(Caver::ItemType,std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>> *)
 *
 * Callees: 2
 *   0x00000000001F5D00  std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Item>*,std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>>>,boost::shared_ptr<Caver::Item> const&)
 *   0x000000000054C6A0  sub_54C6A0
 *
 * Referenced strings: 16
 *   insn=0x00000000003AD2B4 string=0x00000000003AD2B8 "@"
 *   insn=0x00000000003AD2BC string=0x00000000003AD2C0 "H"
 *   insn=0x00000000003AD2C0 string=0x00000000003AD2C4 "\t"
 *   insn=0x00000000003AD2C4 string=0x00000000003AD2C8 "?"
 *   insn=0x00000000003AD2CC string=0x00000000003AD2D0 "a"
 *   insn=0x00000000003AD2D0 string=0x00000000003AD2D4 "?"
 *   insn=0x00000000003AD2D4 string=0x00000000003AD2D8 "`"
 *   insn=0x00000000003AD2D8 string=0x00000000003AD2DC "("
 *   insn=0x00000000003AD2E0 string=0x00000000003AD2E4 "("
 *   insn=0x00000000003AD2E8 string=0x00000000003AD2EC "\t"
 *   insn=0x00000000003AD2E8 string=0x00000000003AD2F8 "(@"
 *   insn=0x00000000003AD2EC string=0x00000000003AD2F0 ")"
 *   insn=0x00000000003AD2F0 string=0x00000000003AD2F4 "\t"
 *   insn=0x00000000003AD2F8 string=0x00000000003AD2FC "h"
 *   insn=0x00000000003AD304 string=0x00000000003AD308 "~""
 *   insn=0x00000000003AD308 string=0x00000000001F5D00 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharacterState::GetItemsOfType(__int64 result, int a2, __int64 a3)
{
  __int64 v3; // x21
  __int64 v4; // x22
  _DWORD *v7; // x8
  _QWORD *v8; // x1
  __int64 v9; // x8

  v3 = *(_QWORD *)(result + 40);
  v4 = result + 24;
  if ( result + 24 != v3 )
  {
    do
    {
      v7 = *(_DWORD **)(v3 + 40);
      if ( *v7 == a2 )
      {
        v8 = *(_QWORD **)(a3 + 8);
        if ( v8 == *(_QWORD **)(a3 + 16) )
        {
          std::vector<boost::shared_ptr<Caver::Item>>::_M_insert_aux();
        }
        else
        {
          *v8 = v7;
          v9 = *(_QWORD *)(v3 + 48);
          v8[1] = v9;
          if ( v9 )
            ++*(_QWORD *)(v9 + 8);
          *(_QWORD *)(a3 + 8) = v8 + 2;
        }
      }
      result = sub_54C6A0(v3);
      v3 = result;
    }
    while ( v4 != result );
  }
  return result;
}

