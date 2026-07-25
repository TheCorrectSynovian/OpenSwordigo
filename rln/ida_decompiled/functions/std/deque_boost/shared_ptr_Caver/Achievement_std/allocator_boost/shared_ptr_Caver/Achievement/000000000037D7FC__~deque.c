/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037D7FC
 * Mangled: _ZNSt5dequeIN5boost10shared_ptrIN5Caver11AchievementEEESaIS4_EED2Ev
 * Demangled: std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::~deque()
 *
 * Callers: 1
 *   0x00000000001F5D80  std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::~deque()
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200EF0  std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_destroy_data_aux(std::_Deque_iterator<boost::shared_ptr<Caver::Achievement>,boost::shared_ptr<Caver::Achievement>&,boost::shared_ptr<Caver::Achievement>*>,std::_Deque_iterator<boost::shared_ptr<Caver::Achievement>,boost::shared_ptr<Caver::Achievement>&,boost::shared_ptr<Caver::Achievement>*>)
 *   0x000000000037D8F4  Caver::AchievementsManager::Update(float)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x000000000037D80C string=0x000000000037D810 "T"
 *   insn=0x000000000037D81C string=0x000000000037D820 "`"
 *   insn=0x000000000037D820 string=0x000000000037D824 "h&B"
 *   insn=0x000000000037D824 string=0x000000000037D828 "a"
 *   insn=0x000000000037D828 string=0x000000000037D82C "j.D"
 *   insn=0x000000000037D848 string=0x000000000037D84C "`"
 *   insn=0x000000000037D850 string=0x000000000037D854 "u&@"
 *   insn=0x000000000037D854 string=0x000000000037D858 "h"
 *   insn=0x000000000037D870 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000037D878 string=0x000000000037D87C "`"
 *   insn=0x000000000037D8A8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000037D8B4 string=0x000000000037D8B8 "u&@"
 *   insn=0x000000000037D8B8 string=0x000000000037D8BC "i"
 *   insn=0x000000000037D8C0 string=0x000000000037D8C4 "?"
 *   insn=0x000000000037D8C8 string=0x000000000037D8CC "6!"
 *   insn=0x000000000037D8D0 string=0x000000000037D8D4 "w"
 *   insn=0x000000000037D8DC string=0x000000000037D8E0 "h"
 *   insn=0x000000000037D8E4 string=0x000000000037D8E8 "r"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::deque<boost::shared_ptr<Caver::Achievement>>::~deque(__int64 a1)
{
  void *v2; // x0
  unsigned __int64 v3; // x21
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x22
  void *v6; // t1

  _ReadStatusReg(TPIDR_EL0);
  std::deque<boost::shared_ptr<Caver::Achievement>>::_M_destroy_data_aux();
  v2 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD *)(a1 + 72);
    v4 = *(_QWORD *)(a1 + 40);
    if ( v4 < v3 + 8 )
    {
      v5 = v4 - 8;
      do
      {
        v6 = *(void **)(v5 + 8);
        v5 += 8LL;
        operator delete(v6);
      }
      while ( v5 < v3 );
      v2 = *(void **)a1;
    }
    operator delete(v2);
  }
}

