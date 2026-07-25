/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B8228
 * Mangled: _ZN5Caver9GameState22GetAllQuestsInProgressEPSt6vectorIPNS_10QuestStateESaIS3_EE
 * Demangled: Caver::GameState::GetAllQuestsInProgress(std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>> *)
 *
 * Callers: 1
 *   0x00000000001F4730  Caver::GameState::GetAllQuestsInProgress(std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>> *)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC0B0  std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestState **,std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>>>,Caver::QuestState * const&)
 *   0x000000000054C6A0  sub_54C6A0
 *
 * Referenced strings: 10
 *   insn=0x00000000003B8238 string=0x00000000003B823C "U"
 *   insn=0x00000000003B825C string=0x00000000003B8260 "\t!@9"
 *   insn=0x00000000003B8268 string=0x00000000003B826C "a"
 *   insn=0x00000000003B826C string=0x00000000003B8270 "?"
 *   insn=0x00000000003B8274 string=0x00000000003B8278 "("
 *   insn=0x00000000003B8278 string=0x00000000003B827C "h"
 *   insn=0x00000000003B827C string=0x00000000003B8280 "!"
 *   insn=0x00000000003B8280 string=0x00000000003B8284 "h"
 *   insn=0x00000000003B8294 string=0x00000000001FC0B0 "0'"
 *   insn=0x00000000003B82D0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameState::GetAllQuestsInProgress(__int64 result, __int64 a2)
{
  __int64 v2; // x22
  __int64 v4; // x20
  __int64 v5; // x8
  _QWORD *v6; // x1

  v2 = result + 256;
  _ReadStatusReg(TPIDR_EL0);
  v4 = *(_QWORD *)(result + 272);
  if ( result + 256 != v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 40);
      if ( !*(_BYTE *)(v5 + 8) )
      {
        v6 = *(_QWORD **)(a2 + 8);
        if ( v6 == *(_QWORD **)(a2 + 16) )
        {
          std::vector<Caver::QuestState *>::_M_insert_aux(a2, v6);
        }
        else
        {
          *v6 = v5;
          *(_QWORD *)(a2 + 8) += 8LL;
        }
      }
      result = sub_54C6A0(v4);
      v4 = result;
    }
    while ( v2 != result );
  }
  return result;
}

