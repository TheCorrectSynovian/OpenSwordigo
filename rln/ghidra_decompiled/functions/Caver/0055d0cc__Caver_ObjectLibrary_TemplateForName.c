/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055d0cc
 * Function: Caver::ObjectLibrary::TemplateForName
 * Signature: undefined __cdecl TemplateForName(string * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x0055d188) */
/* WARNING: Removing unreachable block (ram,0x0055d198) */
/* Caver::ObjectLibrary::TemplateForName(std::string const&, bool) */

void Caver::ObjectLibrary::TemplateForName(string *param_1,bool param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  string *psVar4;
  ObjectTemplate *this;
  long *plVar5;
  ulong in_x2;
  long *in_x8;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *local_60;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 0055cfc8 with catch @ 0055d0f4 */
  if (param_1[0x80] == (string)0x0) {
                    /* try { // try from 0055d114 to 0065d13b has its CatchHandler @ 0055d140 */
    psVar4 = (string *)
             std::
             _Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
             ::find((_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                     *)(param_1 + 8),(string *)(ulong)param_2);
    if (param_1 + 0x10 != psVar4) {
      lVar6 = *(long *)(psVar4 + 0x38);
      if (lVar6 == 0) {
        this = operator_new(0x138);
        ObjectTemplate::ObjectTemplate(this);
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        plVar5 = *(long **)(psVar4 + 0x38);
        *(ObjectTemplate **)(psVar4 + 0x38) = this;
        if ((plVar5 != (long *)0x0) &&
           (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
          (**(code **)(*plVar5 + 8))();
          this = *(ObjectTemplate **)(psVar4 + 0x38);
        }
        ObjectTemplate::LoadFromProtobufMessage(this,*(ObjectTemplate **)(psVar4 + 0x28));
                    /* try { // try from 0055d214 to 0065d23f has its CatchHandler @ 0055d214
                       catch() { ... } // from try @ 0055d214 with catch @ 0055d214
                       catch() { ... } // from try @ 0055d264 with catch @ 0055d214
                       catch() { ... } // from try @ 0055d384 with catch @ 0055d214
                       catch() { ... } // from try @ 0055d4e8 with catch @ 0055d214 */
        lVar6 = *(long *)(psVar4 + 0x38);
        *(string **)(lVar6 + 0x128) = param_1;
        *in_x8 = lVar6;
        if (lVar6 == 0) goto LAB_0055d230;
      }
      else {
        *in_x8 = lVar6;
                    /* try { // try from 0055d13c to 0065d213 has its CatchHandler @ 0055cf2c */
      }
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      goto LAB_0055d230;
    }
                    /* catch() { ... } // from try @ 0055d114 with catch @ 0055d140 */
    if ((in_x2 & 1) != 0) {
                    /* catch() { ... } // from try @ 0055cf70 with catch @ 0055d144 */
      puVar8 = *(undefined8 **)(param_1 + 0x38);
      puVar1 = *(undefined8 **)(param_1 + 0x40);
      param_1[0x80] = (string)0x1;
      if (puVar8 != puVar1) {
        do {
          TemplateForName((string *)*puVar8,param_2);
          if (local_60 != (long *)0x0) {
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
                    /* try { // try from 0055d264 to 0065d2af has its CatchHandler @ 0055d214 */
            iVar2 = (int)local_60[1] + -1;
            *(int *)(local_60 + 1) = iVar2;
            if (iVar2 == 0) {
              (**(code **)(*local_60 + 8))(local_60);
            }
            break;
          }
                    /* catch() { ... } // from try @ 0055cf58 with catch @ 0055d1ac */
          puVar8 = puVar8 + 2;
                    /* catch() { ... } // from try @ 0055cff0 with catch @ 0055d1b0 */
        } while (puVar1 != puVar8);
        param_1[0x80] = (string)0x0;
        *in_x8 = (long)local_60;
        if ((local_60 != (long *)0x0) && ((int)local_60[1] == 0)) {
          (**(code **)(*local_60 + 8))(local_60);
        }
        goto LAB_0055d230;
      }
      param_1[0x80] = (string)0x0;
    }
  }
  *in_x8 = 0;
LAB_0055d230:
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0055d240 to 0065d253 has its CatchHandler @ 0055d5bc */
                    /* try { // try from 0055d258 to 0065d263 has its CatchHandler @ 0055d54c */
  return;
}


