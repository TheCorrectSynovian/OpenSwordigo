/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cab34
 * Function: Caver::DebugInfoOverlay::Toggle
 * Signature: undefined __thiscall Toggle(DebugInfoOverlay * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DebugInfoOverlay::Toggle() */

void __thiscall Caver::DebugInfoOverlay::Toggle(DebugInfoOverlay *this)

{
  vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
  *pvVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  GUILabel *pGVar9;
  TextureLibrary *this_00;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  long *plVar14;
  long local_78;
  long *local_70;
  long local_68;
  
                    /* try { // try from 004cab40 to 005cab53 has its CatchHandler @ 004cb124 */
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
                    /* try { // try from 004cab64 to 005cab6f has its CatchHandler @ 004cb0b8 */
  GUIView::RemoveAllSubviews((GUIView *)this);
  lVar5 = *(long *)(this + 0x138);
  pvVar1 = (vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
            *)(this + 0x130);
  lVar3 = *(long *)(this + 0x130);
  for (lVar11 = lVar3; lVar5 != lVar11; lVar11 = lVar11 + 0x10) {
    plVar13 = *(long **)(lVar11 + 8);
    if ((plVar13 != (long *)0x0) &&
       (lVar10 = plVar13[1], plVar13[1] = lVar10 + -1, lVar10 + -1 == 0)) {
                    /* try { // try from 004cab98 to 005cabd3 has its CatchHandler @ 004cb054 */
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar10 = plVar13[2];
      plVar13[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
  }
  *(long *)(this + 0x138) = lVar3;
  iVar2 = 0;
  if (*(int *)(this + 0x164) < 2) {
    iVar2 = *(int *)(this + 0x164) + 1;
  }
  *(int *)(this + 0x164) = iVar2;
  if (iVar2 == 1) {
                    /* try { // try from 004caca8 to 005cacbb has its CatchHandler @ 004cafb8 */
    pGVar9 = operator_new(0x150);
    GUILabel::GUILabel(pGVar9);
    boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
              ((shared_ptr<Caver::GUILabel> *)&local_78,pGVar9);
    lVar11 = *(long *)(this + 0x100);
    plVar13 = *(long **)(this + 0x108);
                    /* try { // try from 004caccc to 005cacd7 has its CatchHandler @ 004caf80 */
    *(long *)(this + 0x100) = local_78;
    *(long **)(this + 0x108) = local_70;
    local_78 = lVar11;
    local_70 = plVar13;
    if ((plVar13 != (long *)0x0) &&
       (lVar11 = plVar13[1], plVar13[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar11 = plVar13[2];
                    /* try { // try from 004cad00 to 005cad3b has its CatchHandler @ 004caf24 */
      plVar13[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    puVar4 = *(undefined8 **)(this + 0x138);
    if (puVar4 == *(undefined8 **)(this + 0x140)) {
      std::
      vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
      ::_M_insert_aux(pvVar1,puVar4,this + 0x100);
    }
    else {
      *puVar4 = *(undefined8 *)(this + 0x100);
      lVar11 = *(long *)(this + 0x108);
      puVar4[1] = lVar11;
      if (lVar11 != 0) {
                    /* try { // try from 004cad3c to 005cb127 has its CatchHandler @ 004cab10 */
        *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
      }
      *(undefined8 **)(this + 0x138) = puVar4 + 2;
    }
    pGVar9 = operator_new(0x150);
    GUILabel::GUILabel(pGVar9);
    boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
              ((shared_ptr<Caver::GUILabel> *)&local_78,pGVar9);
    lVar11 = *(long *)(this + 0x110);
    plVar13 = *(long **)(this + 0x118);
    *(long *)(this + 0x110) = local_78;
    *(long **)(this + 0x118) = local_70;
    local_78 = lVar11;
    local_70 = plVar13;
    if ((plVar13 != (long *)0x0) &&
       (lVar11 = plVar13[1], plVar13[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar11 = plVar13[2];
      plVar13[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    puVar4 = *(undefined8 **)(this + 0x138);
    if (puVar4 == *(undefined8 **)(this + 0x140)) {
      std::
      vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
      ::_M_insert_aux(pvVar1,puVar4,this + 0x110);
    }
    else {
      *puVar4 = *(undefined8 *)(this + 0x110);
      lVar11 = *(long *)(this + 0x118);
      puVar4[1] = lVar11;
      if (lVar11 != 0) {
        *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
      }
      *(undefined8 **)(this + 0x138) = puVar4 + 2;
    }
    pGVar9 = operator_new(0x150);
    GUILabel::GUILabel(pGVar9);
    boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
              ((shared_ptr<Caver::GUILabel> *)&local_78,pGVar9);
    lVar11 = *(long *)(this + 0x120);
    plVar13 = *(long **)(this + 0x128);
    *(long *)(this + 0x120) = local_78;
    *(long **)(this + 0x128) = local_70;
    local_78 = lVar11;
    local_70 = plVar13;
    if ((plVar13 != (long *)0x0) &&
       (lVar11 = plVar13[1], plVar13[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar11 = plVar13[2];
      plVar13[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    puVar4 = *(undefined8 **)(this + 0x138);
    if (puVar4 == *(undefined8 **)(this + 0x140)) {
      std::
      vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
      ::_M_insert_aux(pvVar1,puVar4,this + 0x120);
    }
    else {
      *puVar4 = *(undefined8 *)(this + 0x120);
      lVar11 = *(long *)(this + 0x128);
      puVar4[1] = lVar11;
      if (lVar11 != 0) {
        *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
      }
      *(undefined8 **)(this + 0x138) = puVar4 + 2;
    }
    SetTextureMemoryUsage(this,0);
    SetNumVertices(this,0,0);
    SetNumTriangles(this,0);
                    /* catch() { ... } // from try @ 004cad00 with catch @ 004caf24 */
    this_00 = (TextureLibrary *)TextureLibrary::sharedLibrary();
    TextureLibrary::PrintMemoryUsageStats(this_00);
  }
  else if (iVar2 == 0) {
    pGVar9 = operator_new(0x150);
                    /* try { // try from 004cabfc to 005cac0f has its CatchHandler @ 004cb050 */
    GUILabel::GUILabel(pGVar9);
    boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
              ((shared_ptr<Caver::GUILabel> *)&local_78,pGVar9);
    lVar11 = *(long *)(this + 0xf0);
    plVar13 = *(long **)(this + 0xf8);
                    /* try { // try from 004cac20 to 005cac2b has its CatchHandler @ 004cb018 */
    *(long *)(this + 0xf0) = local_78;
    *(long **)(this + 0xf8) = local_70;
    local_78 = lVar11;
    local_70 = plVar13;
    if ((plVar13 != (long *)0x0) &&
       (lVar11 = plVar13[1], plVar13[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
                    /* try { // try from 004cac4c to 005cac87 has its CatchHandler @ 004cafbc */
      lVar11 = plVar13[2];
      plVar13[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    puVar4 = *(undefined8 **)(this + 0x138);
    if (puVar4 == *(undefined8 **)(this + 0x140)) {
      std::
      vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
      ::_M_insert_aux(pvVar1,puVar4,this + 0xf0);
    }
    else {
      *puVar4 = *(undefined8 *)(this + 0xf0);
      lVar11 = *(long *)(this + 0xf8);
      puVar4[1] = lVar11;
      if (lVar11 != 0) {
        *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
      }
      *(undefined8 **)(this + 0x138) = puVar4 + 2;
    }
    *(undefined8 *)(this + 0x14c) = 0;
    SetFPS(this,0.0);
  }
  uVar8 = DAT_00683728;
  plVar6 = *(long **)(this + 0x138);
  for (plVar13 = *(long **)(this + 0x130); plVar13 != plVar6; plVar13 = plVar13 + 2) {
    pGVar9 = (GUILabel *)*plVar13;
    if ((((pGVar9[0x108] != (GUILabel)0xff) || (pGVar9[0x109] != (GUILabel)0xff)) ||
        (pGVar9[0x10a] != (GUILabel)0xff)) || (pGVar9[0x10b] != (GUILabel)0xff)) {
                    /* catch() { ... } // from try @ 004caccc with catch @ 004caf80 */
      plVar14 = *(long **)(pGVar9 + 0x118);
      *(undefined4 *)(pGVar9 + 0x108) = 0xffffffff;
      *(undefined8 *)(pGVar9 + 0x110) = 0;
      *(undefined8 *)(pGVar9 + 0x118) = 0;
      if ((plVar14 != (long *)0x0) &&
         (lVar11 = plVar14[1], plVar14[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        lVar11 = plVar14[2];
                    /* catch() { ... } // from try @ 004caca8 with catch @ 004cafb8 */
        plVar14[2] = lVar11 + -1;
                    /* catch() { ... } // from try @ 004cac4c with catch @ 004cafbc */
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
      }
      GUILabel::UpdateText(pGVar9);
      pGVar9 = (GUILabel *)*plVar13;
    }
    pGVar9[0x140] = (GUILabel)0x1;
    *(undefined4 *)(pGVar9 + 0x141) = 0xff000000;
    *(undefined8 *)(pGVar9 + 0x148) = uVar8;
    GUILabel::UpdateText(pGVar9);
    pGVar9 = (GUILabel *)*plVar13;
    Font::SmallSystemFont();
    if (local_78 != *(long *)(pGVar9 + 0xf0)) {
      if (local_70 != (long *)0x0) {
                    /* catch() { ... } // from try @ 004cac20 with catch @ 004cb018 */
        local_70[1] = local_70[1] + 1;
      }
      plVar14 = *(long **)(pGVar9 + 0xf8);
      *(long *)(pGVar9 + 0xf0) = local_78;
      *(long **)(pGVar9 + 0xf8) = local_70;
      if ((plVar14 != (long *)0x0) &&
         (lVar11 = plVar14[1], plVar14[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
                    /* catch() { ... } // from try @ 004cabfc with catch @ 004cb050 */
        lVar11 = plVar14[2];
                    /* catch() { ... } // from try @ 004cab98 with catch @ 004cb054 */
        plVar14[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
      }
      GUILabel::UpdateText(pGVar9);
    }
    plVar14 = local_70;
    if ((local_70 != (long *)0x0) &&
       (lVar11 = local_70[1], local_70[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*local_70 + 0x10))(local_70);
      lVar11 = plVar14[2];
      plVar14[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
                    /* catch() { ... } // from try @ 004cab64 with catch @ 004cb0b8 */
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
    }
    local_78 = *plVar13;
    pcVar12 = *(code **)(*(long *)this + 0x60);
    local_70 = (long *)plVar13[1];
    if (local_70 != (long *)0x0) {
      local_70[1] = local_70[1] + 1;
    }
    (*pcVar12)(this,&local_78);
    plVar14 = local_70;
    if ((local_70 != (long *)0x0) &&
       (lVar11 = local_70[1], local_70[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*local_70 + 0x10))(local_70);
      lVar11 = plVar14[2];
                    /* catch() { ... } // from try @ 004cab40 with catch @ 004cb124 */
      plVar14[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
    }
  }
  (**(code **)(*(long *)this + 0x58))(this);
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


