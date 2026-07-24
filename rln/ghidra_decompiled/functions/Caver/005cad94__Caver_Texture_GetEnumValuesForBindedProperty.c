/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cad94
 * Function: Caver::Texture::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(Texture * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::GetEnumValuesForBindedProperty(int, std::vector<Caver::BindingValue,
   std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::Texture::GetEnumValuesForBindedProperty(Texture *this,int param_1,vector *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  string *psVar5;
  vector *pvVar6;
  vector *pvVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined4 local_70 [2];
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
                    /* try { // try from 005cad94 to 006cae4b has its CatchHandler @ 005cab34 */
  pvVar7 = (vector *)local_70;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  switch(param_1) {
  case 1:
    uVar10 = 0xffffffffffffffff;
    psVar5 = (string *)param_2;
    puVar9 = PTR_imageTypeStrings_007e7180;
    do {
      this = (Texture *)
             BindingValue::ValueWithInt((BindingValue *)(ulong)((int)uVar10 + 1),(int)puVar9,psVar5)
      ;
      puVar1 = *(undefined4 **)(param_2 + 8);
      if (puVar1 == *(undefined4 **)(param_2 + 0x10)) {
        psVar5 = (string *)local_70;
        this = (Texture *)
               std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                         ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2
                         );
        plVar4 = local_50;
      }
      else {
        *puVar1 = local_70[0];
        *(undefined8 *)(puVar1 + 2) = local_68;
        *(long **)(puVar1 + 4) = local_60;
        if (local_60 != (long *)0x0) {
          local_60[1] = local_60[1] + 1;
        }
        *(undefined8 *)(puVar1 + 6) = local_58;
        *(long **)(puVar1 + 8) = local_50;
        if (local_50 != (long *)0x0) {
          local_50[1] = local_50[1] + 1;
        }
        *(undefined4 **)(param_2 + 8) = puVar1 + 10;
        plVar4 = local_50;
      }
      local_50 = plVar4;
      if ((plVar4 != (long *)0x0) && (lVar8 = plVar4[1], plVar4[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        this = (Texture *)(**(code **)(*plVar4 + 0x10))(plVar4);
        lVar8 = plVar4[2];
        plVar4[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          this = (Texture *)(**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      plVar4 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar8 = local_60[1], local_60[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        this = (Texture *)(**(code **)(*local_60 + 0x10))(local_60);
        lVar8 = plVar4[2];
        plVar4[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          this = (Texture *)(**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 8;
    } while (uVar10 < 3);
    break;
  case 2:
  case 6:
    uVar10 = 0;
    psVar5 = (string *)param_2;
    puVar9 = PTR_pixelFormatStrings_007e7170;
    do {
      puVar9 = puVar9 + 8;
      this = (Texture *)
             BindingValue::ValueWithInt((BindingValue *)(ulong)((int)uVar10 + 1),(int)puVar9,psVar5)
      ;
      puVar1 = *(undefined4 **)(param_2 + 8);
      if (puVar1 == *(undefined4 **)(param_2 + 0x10)) {
        psVar5 = (string *)local_70;
        this = (Texture *)
               std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                         ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2
                         );
        plVar4 = local_50;
      }
      else {
        *puVar1 = local_70[0];
        *(undefined8 *)(puVar1 + 2) = local_68;
        *(long **)(puVar1 + 4) = local_60;
        if (local_60 != (long *)0x0) {
          local_60[1] = local_60[1] + 1;
        }
        *(undefined8 *)(puVar1 + 6) = local_58;
        *(long **)(puVar1 + 8) = local_50;
        if (local_50 != (long *)0x0) {
                    /* try { // try from 005cae4c to 006cae4f has its CatchHandler @ 005cb190 */
          local_50[1] = local_50[1] + 1;
        }
                    /* try { // try from 005cae50 to 006cb047 has its CatchHandler @ 005cab34 */
        *(undefined4 **)(param_2 + 8) = puVar1 + 10;
        plVar4 = local_50;
      }
      local_50 = plVar4;
      if ((plVar4 != (long *)0x0) && (lVar8 = plVar4[1], plVar4[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        this = (Texture *)(**(code **)(*plVar4 + 0x10))(plVar4);
        lVar8 = plVar4[2];
        plVar4[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          this = (Texture *)(**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      plVar4 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar8 = local_60[1], local_60[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        this = (Texture *)(**(code **)(*local_60 + 0x10))(local_60);
        lVar8 = plVar4[2];
        plVar4[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          this = (Texture *)(**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0xb);
    break;
  case 5:
    iVar3 = (int)PTR_imageTypeStrings_007e7180;
                    /* try { // try from 005cb048 to 006cb077 has its CatchHandler @ 005cb1b0 */
    pvVar6 = param_2;
    BindingValue::ValueWithInt((BindingValue *)0x3,iVar3 + 0x18,(string *)param_2);
    puVar1 = *(undefined4 **)(param_2 + 8);
    if (puVar1 == *(undefined4 **)(param_2 + 0x10)) {
      std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2);
      pvVar6 = pvVar7;
      plVar4 = local_50;
    }
    else {
      *puVar1 = local_70[0];
                    /* try { // try from 005cb078 to 006cb0e7 has its CatchHandler @ 005cab34 */
      *(undefined8 *)(puVar1 + 2) = local_68;
      *(long **)(puVar1 + 4) = local_60;
      if (local_60 != (long *)0x0) {
        local_60[1] = local_60[1] + 1;
      }
      *(undefined8 *)(puVar1 + 6) = local_58;
      *(long **)(puVar1 + 8) = local_50;
      if (local_50 != (long *)0x0) {
        local_50[1] = local_50[1] + 1;
      }
      *(undefined4 **)(param_2 + 8) = puVar1 + 10;
      plVar4 = local_50;
    }
    local_50 = plVar4;
                    /* try { // try from 005cb0e8 to 006cb0f3 has its CatchHandler @ 005cb200 */
    if ((plVar4 != (long *)0x0) && (lVar8 = plVar4[1], plVar4[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 005cb0f4 to 006cb1d3 has its CatchHandler @ 005cab34 */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar8 = plVar4[2];
      plVar4[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    plVar4 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar8 = local_60[1], local_60[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar8 = plVar4[2];
      plVar4[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    this = (Texture *)BindingValue::ValueWithInt((BindingValue *)0x2,iVar3 + 0x10,(string *)pvVar6);
    puVar1 = *(undefined4 **)(param_2 + 8);
    if (puVar1 == *(undefined4 **)(param_2 + 0x10)) {
      this = (Texture *)
             std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                       ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2,
                        puVar1,local_70);
    }
    else {
      *puVar1 = local_70[0];
      *(undefined8 *)(puVar1 + 2) = local_68;
                    /* catch() { ... } // from try @ 005cae4c with catch @ 005cb190 */
                    /* catch() { ... } // from try @ 005cad90 with catch @ 005cb194 */
      *(long **)(puVar1 + 4) = local_60;
                    /* catch() { ... } // from try @ 005cacb0 with catch @ 005cb198 */
      if (local_60 != (long *)0x0) {
                    /* catch() { ... } // from try @ 005cac00 with catch @ 005cb19c */
        local_60[1] = local_60[1] + 1;
      }
      *(undefined8 *)(puVar1 + 6) = local_58;
                    /* catch() { ... } // from try @ 005cb048 with catch @ 005cb1b0 */
      *(long **)(puVar1 + 8) = local_50;
      if (local_50 != (long *)0x0) {
        local_50[1] = local_50[1] + 1;
      }
      *(undefined4 **)(param_2 + 8) = puVar1 + 10;
                    /* try { // try from 005cb1d4 to 006cb24b has its CatchHandler @ 005cb254 */
    }
    if ((local_50 != (long *)0x0) &&
       (lVar8 = local_50[1], local_50[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005cb0e8 with catch @ 005cb200 */
      this = (Texture *)(**(code **)(*local_50 + 0x10))(local_50);
      lVar8 = local_50[2];
      local_50[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        this = (Texture *)(**(code **)(*local_50 + 0x18))(local_50);
      }
    }
    if ((local_60 != (long *)0x0) &&
       (lVar8 = local_60[1], local_60[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 005cb24c to 006cb257 has its CatchHandler @ 005cab34 */
                    /* catch() { ... } // from try @ 005cb1d4 with catch @ 005cb254 */
      this = (Texture *)(**(code **)(*local_60 + 0x10))(local_60);
                    /* try { // try from 005cb258 to 006cb2df has its CatchHandler @ 005cb258
                       catch() { ... } // from try @ 005cb258 with catch @ 005cb258
                       catch() { ... } // from try @ 005cb348 with catch @ 005cb258
                       catch() { ... } // from try @ 005cb5b0 with catch @ 005cb258 */
      lVar8 = local_60[2];
      local_60[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        this = (Texture *)(**(code **)(*local_60 + 0x18))(local_60);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


