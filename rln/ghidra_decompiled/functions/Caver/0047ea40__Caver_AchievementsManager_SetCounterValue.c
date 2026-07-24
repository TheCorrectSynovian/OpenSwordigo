/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047ea40
 * Function: Caver::AchievementsManager::SetCounterValue
 * Signature: undefined __thiscall SetCounterValue(AchievementsManager * this, string * param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::AchievementsManager::SetCounterValue(std::string const&, int, int) */

undefined4 __thiscall
Caver::AchievementsManager::SetCounterValue
          (AchievementsManager *this,string *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  double dVar3;
  int *piVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  long local_88;
  long *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  piVar4 = (int *)std::
                  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                  ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                *)(this + 0x1a8),param_1);
  *piVar4 = param_3;
  auVar12 = std::
            _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
            ::equal_range((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                           *)(this + 0x60),param_1);
  dVar3 = _DAT_00690358;
  lVar6 = auVar12._0_8_;
  if (lVar6 == auVar12._8_8_) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    dVar11 = (double)param_3 * _DAT_00690358;
    do {
      local_88 = *(long *)(lVar6 + 0x28);
      local_80 = *(long **)(lVar6 + 0x30);
      if (local_80 != (long *)0x0) {
        local_80[1] = local_80[1] + 1;
      }
      iVar1 = *(int *)(local_88 + 0x28);
      dVar10 = dVar11 / (double)iVar1;
      if (dVar3 < dVar10) {
        dVar10 = dVar3;
      }
      ReportPercentCompleted(this,(shared_ptr *)&local_88,dVar10);
      if ((iVar1 <= param_3) &&
         (SetAchievementCompleted(this,(shared_ptr *)&local_88,true), param_2 < iVar1)) {
        plVar7 = *(long **)(this + 0x108);
        if (plVar7 == *(long **)(this + 0xe8)) {
          *(undefined4 *)(this + 0x138) = 0x40400000;
        }
        if (plVar7 == (long *)(*(long *)(this + 0x118) + -0x10)) {
          if ((ulong)(*(long *)(this + 0xe0) -
                     (*(long *)(this + 0x120) - *(long *)(this + 0xd8) >> 3)) < 2) {
            std::
            deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>
            ::_M_reallocate_map((deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>
                                 *)(this + 0xd8),1,false);
          }
          pvVar5 = operator_new(0x200);
          *(void **)(*(long *)(this + 0x120) + 8) = pvVar5;
          plVar7 = *(long **)(this + 0x108);
          *plVar7 = local_88;
          plVar7[1] = (long)local_80;
          if (local_80 != (long *)0x0) {
            local_80[1] = local_80[1] + 1;
          }
          lVar8 = *(long *)(this + 0x120);
          *(long *)(this + 0x120) = lVar8 + 8;
          lVar8 = *(long *)(lVar8 + 8);
          *(long *)(this + 0x108) = lVar8;
          *(long *)(this + 0x110) = lVar8;
          *(long *)(this + 0x118) = lVar8 + 0x200;
        }
        else {
          *plVar7 = local_88;
          plVar7[1] = (long)local_80;
          if (local_80 != (long *)0x0) {
            local_80[1] = local_80[1] + 1;
          }
          *(long **)(this + 0x108) = plVar7 + 2;
        }
        uVar9 = 1;
      }
      plVar7 = local_80;
      if ((local_80 != (long *)0x0) &&
         (lVar8 = local_80[1], local_80[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        (**(code **)(*local_80 + 0x10))(local_80);
        lVar8 = plVar7[2];
        plVar7[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      lVar6 = FUN_0064c640(lVar6);
    } while (lVar6 != auVar12._8_8_);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


