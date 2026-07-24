/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00585af4
 * Function: Caver::SoundLibrary::EffectForName
 * Signature: undefined __cdecl EffectForName(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundLibrary::EffectForName(std::string const&) */

void Caver::SoundLibrary::EffectForName(string *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  SoundEffect *this;
  ulong uVar8;
  string *in_x1;
  long *in_x8;
  int *piVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_80 [8];
  long local_78;
  long local_70;
  SoundEffect *local_68 [2];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_68[0] = (SoundEffect *)0x0;
  auVar11 = std::
            _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
            ::equal_range((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                           *)param_1,in_x1);
  if (auVar11._0_8_ != auVar11._8_8_) {
    iVar10 = 0;
    do {
      lVar7 = FUN_0064c6a0();
      iVar10 = iVar10 + 1;
    } while (lVar7 != auVar11._8_8_);
    if (0 < iVar10) {
      auVar11 = std::
                _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                ::equal_range((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                               *)param_1,in_x1);
      lVar7 = auVar11._0_8_;
      if (iVar10 < 2) {
        iVar6 = 0;
      }
      else {
        iVar6 = fastrandom();
                    /* try { // try from 00585b88 to 00685b8f has its CatchHandler @ 00585d58 */
        iVar1 = 0;
        if (iVar10 != 0) {
          iVar1 = iVar6 / iVar10;
        }
        iVar6 = iVar6 - iVar1 * iVar10;
      }
                    /* try { // try from 00585ba4 to 00685baf has its CatchHandler @ 00585e58 */
      if (lVar7 != auVar11._8_8_) {
        iVar6 = iVar6 + 1;
        do {
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) {
            local_68[0] = *(SoundEffect **)(lVar7 + 0x28);
                    /* try { // try from 00585bd0 to 00685bdb has its CatchHandler @ 00585d14 */
            if (local_68[0] != (SoundEffect *)0x0) {
              *(int *)(local_68[0] + 8) = *(int *)(local_68[0] + 8) + 1;
              *in_x8 = (long)local_68[0];
              goto LAB_00585ca0;
            }
            local_68[0] = (SoundEffect *)0x0;
            break;
          }
          lVar7 = FUN_0064c640(lVar7);
        } while (lVar7 != auVar11._8_8_);
      }
    }
  }
  this = operator_new(0x40);
                    /* try { // try from 00585c00 to 00685c03 has its CatchHandler @ 00585d48 */
  SoundEffect::SoundEffect(this);
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  local_68[0] = this;
  FUN_0066a6a8(this + 0x18);
                    /* try { // try from 00585c24 to 00685c2f has its CatchHandler @ 00585d0c */
  FUN_0066a6a8(this + 0x20);
  FUN_00666bb8(&local_78,&DAT_0069687c,auStack_80);
                    /* try { // try from 00585c4c to 00685c73 has its CatchHandler @ 00585d8c */
  PathForResourceOfType(in_x1,(string *)&local_78);
  uVar8 = FileExistsAtPath((string *)&local_70);
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 00585cec with catch @ 00585cf8 */
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
                    /* catch() { ... } // from try @ 00585c24 with catch @ 00585d0c */
      operator_delete((undefined *)(local_70 + -0x18));
                    /* catch() { ... } // from try @ 00585bd0 with catch @ 00585d14 */
    }
  }
                    /* try { // try from 00585c74 to 00685ceb has its CatchHandler @ 00585748 */
  if ((undefined *)(local_78 + -0x18) == puVar5) {
LAB_00585c84:
    if ((uVar8 & 1) == 0) goto LAB_00585d38;
LAB_00585c88:
    AddEffect((SoundLibrary *)param_1,(intrusive_ptr *)local_68);
    *in_x8 = (long)local_68[0];
    if (local_68[0] == (SoundEffect *)0x0) goto LAB_00585d60;
LAB_00585ca0:
    *(int *)(local_68[0] + 8) = *(int *)(local_68[0] + 8) + 1;
  }
  else {
    piVar9 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
                    /* try { // try from 00585cec to 00685cf3 has its CatchHandler @ 00585cf8 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (0 < iVar10) goto LAB_00585c84;
    operator_delete((undefined *)(local_78 + -0x18));
    if ((uVar8 & 1) != 0) goto LAB_00585c88;
LAB_00585d38:
                    /* try { // try from 00585d38 to 00685d3f has its CatchHandler @ 00585d44 */
    *in_x8 = 0;
    if (local_68[0] == (SoundEffect *)0x0) goto LAB_00585d60;
  }
                    /* catch() { ... } // from try @ 00585d38 with catch @ 00585d44 */
  iVar10 = *(int *)(local_68[0] + 8);
                    /* catch() { ... } // from try @ 00585c00 with catch @ 00585d48 */
  *(int *)(local_68[0] + 8) = iVar10 + -1;
  if (iVar10 + -1 == 0) {
                    /* catch() { ... } // from try @ 00585b88 with catch @ 00585d58 */
    (**(code **)(*(long *)local_68[0] + 8))();
  }
LAB_00585d60:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00585c4c with catch @ 00585d8c */
    __stack_chk_fail();
  }
                    /* try { // try from 00585d7c to 00685d83 has its CatchHandler @ 00585d88 */
                    /* catch() { ... } // from try @ 00585d7c with catch @ 00585d88 */
  return;
}


