/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058db54
 * Function: Caver::BasicRenderingPrograms::AddToContext
 * Signature: undefined __cdecl AddToContext(RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext*) */

void Caver::BasicRenderingPrograms::AddToContext(RenderingContext *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  RenderingProgramShader *pRVar7;
  RenderingProgram *pRVar8;
  long lVar9;
  int *piVar10;
  shared_ptr *psVar11;
  int iVar12;
  undefined1 auStack_a0 [8];
  long local_98;
  RenderingProgram *local_90;
  long *local_88;
  RenderingProgramShader *local_80;
  long *local_78;
  RenderingProgramShader *local_70;
  long *local_68;
  undefined1 auStack_60 [8];
  RenderingProgramShader *local_58;
  long *local_50;
  long local_48;
  
                    /* try { // try from 0058db6c to 0068db7f has its CatchHandler @ 0058db04 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 0058db44 with catch @ 0058db7c */
  local_70 = (RenderingProgramShader *)0x0;
  local_68 = (long *)0x0;
                    /* try { // try from 0058db80 to 0068db87 has its CatchHandler @ 0058db90 */
  pRVar7 = operator_new(0x40);
                    /* try { // try from 0058db88 to 0068db93 has its CatchHandler @ 0058db04 */
                    /* catch() { ... } // from try @ 0058db80 with catch @ 0058db90 */
                    /* catch() { ... } // from try @ 0058dc20 with catch @ 0058db94 */
  FUN_00666bb8(&local_80,"POSITION",&local_98);
  RenderingProgramShader::RenderingProgramShader(pRVar7,param_1,&local_80,0,&DAT_00696a7c);
  local_58 = pRVar7;
                    /* try { // try from 0058dbd4 to 0068dbfb has its CatchHandler @ 0058dc14 */
  boost::detail::shared_count::shared_count<Caver::RenderingProgramShader>
            ((shared_count *)&local_50,pRVar7);
  boost::detail::sp_enable_shared_from_this(&local_58,pRVar7,pRVar7);
  plVar6 = local_50;
  pRVar7 = local_58;
  plVar5 = local_68;
  local_58 = local_70;
  local_50 = local_68;
                    /* try { // try from 0058dbfc to 0068dc03 has its CatchHandler @ 0058dc28 */
  local_70 = pRVar7;
  local_68 = plVar6;
  if ((plVar5 != (long *)0x0) && (lVar9 = plVar5[1], plVar5[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0058dbd4 with catch @ 0058dc14 */
                    /* try { // try from 0058dc18 to 0068dc1f has its CatchHandler @ 0058dc24 */
                    /* try { // try from 0058dc20 to 0068dc3b has its CatchHandler @ 0058db94 */
                    /* catch() { ... } // from try @ 0058dc18 with catch @ 0058dc24 */
    (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* catch() { ... } // from try @ 0058dbfc with catch @ 0058dc28 */
    lVar9 = plVar5[2];
    plVar5[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* catch() { ... } // from try @ 0058dcec with catch @ 0058dc3c */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 0058dc54 to 0068dc5b has its CatchHandler @ 0058dcf8 */
  if (local_80 + -0x18 != (RenderingProgramShader *)PTR_DAT_007e5de8) {
                    /* try { // try from 0058e418 to 0068e42b has its CatchHandler @ 005922b8 */
    pRVar7 = local_80 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)pRVar7;
      *(int *)pRVar7 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)pRVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pRVar7,0x10);
        if (bVar2) {
          *(int *)pRVar7 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_80 + -0x18);
    }
  }
  pRVar7 = local_70;
  FUN_00666bb8(&local_58,"mvpMatrix",&local_90);
                    /* try { // try from 0058dc88 to 0068dc93 has its CatchHandler @ 0058dca0 */
  RenderingProgramShader::AddUniformVariable(pRVar7,0,(string *)&local_58);
  if (local_58 + -0x18 != (RenderingProgramShader *)puVar4) {
    pRVar7 = local_58 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 0058e64c to 0068e657 has its CatchHandler @ 00591214 */
      iVar12 = *(int *)pRVar7;
      *(int *)pRVar7 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)pRVar7;
                    /* try { // try from 0058e44c to 0068e457 has its CatchHandler @ 00591218 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pRVar7,0x10);
        if (bVar2) {
          *(int *)pRVar7 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_58 + -0x18);
    }
  }
  local_80 = (RenderingProgramShader *)0x0;
  local_78 = (long *)0x0;
                    /* catch() { ... } // from try @ 0058dc88 with catch @ 0058dca0 */
  pRVar7 = operator_new(0x40);
  FUN_00666bb8(&local_90,&LAB_00696b68,auStack_60);
                    /* try { // try from 0058dcc4 to 0068dceb has its CatchHandler @ 0058dcf4 */
  RenderingProgramShader::RenderingProgramShader
            (pRVar7,param_1,&local_90,1,
             "\t\t\tvoid main (void)\t\t\t{\t\t\t\tgl_FragColor = vec4(1.0, 1.0, 1.0 ,1.0);\t\t\t}")
  ;
  local_58 = pRVar7;
                    /* try { // try from 0058dcec to 0068dd07 has its CatchHandler @ 0058dc3c */
                    /* catch() { ... } // from try @ 0058dcc4 with catch @ 0058dcf4 */
  boost::detail::shared_count::shared_count<Caver::RenderingProgramShader>
            ((shared_count *)&local_50,pRVar7);
                    /* catch() { ... } // from try @ 0058dc54 with catch @ 0058dcf8 */
  boost::detail::sp_enable_shared_from_this(&local_58,pRVar7,pRVar7);
  plVar6 = local_50;
  pRVar7 = local_58;
  plVar5 = local_78;
                    /* try { // try from 0058dd08 to 0068dd13 has its CatchHandler @ 0058dd14 */
  local_58 = local_80;
                    /* catch() { ... } // from try @ 0058dd08 with catch @ 0058dd14 */
                    /* try { // try from 0058dd18 to 0068dd1b has its CatchHandler @ 0058dd20 */
  local_50 = local_78;
  local_80 = pRVar7;
  local_78 = plVar6;
                    /* catch() { ... } // from try @ 0058dd18 with catch @ 0058dd20 */
  if ((plVar5 != (long *)0x0) && (lVar9 = plVar5[1], plVar5[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* catch() { ... } // from try @ 0058ddb8 with catch @ 0058dd48
                       catch() { ... } // from try @ 0058de5c with catch @ 0058dd48 */
    lVar9 = plVar5[2];
    plVar5[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if (local_90 + -0x18 != (RenderingProgram *)puVar4) {
    pRVar8 = local_90 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)pRVar8;
      *(int *)pRVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)pRVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pRVar8,0x10);
        if (bVar2) {
          *(int *)pRVar8 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_90 + -0x18);
                    /* try { // try from 0058e688 to 0068e68f has its CatchHandler @ 005921e0 */
    }
  }
  local_90 = (RenderingProgram *)0x0;
  local_88 = (long *)0x0;
  pRVar8 = operator_new(0x90);
  FUN_00666bb8(&local_98,"PROGRAM_UNIFORM_COLOR",auStack_a0);
  RenderingProgram::RenderingProgram(pRVar8,param_1,(string *)&local_98);
                    /* try { // try from 0058ddb4 to 0068ddb7 has its CatchHandler @ 0058de14 */
                    /* try { // try from 0058ddb8 to 0068de33 has its CatchHandler @ 0058dd48 */
  local_58 = (RenderingProgramShader *)pRVar8;
  boost::detail::shared_count::shared_count<Caver::RenderingProgram>
            ((shared_count *)&local_50,pRVar8);
  boost::detail::sp_enable_shared_from_this(&local_58,pRVar8,pRVar8);
  plVar6 = local_50;
  pRVar7 = local_58;
  plVar5 = local_88;
  local_58 = (RenderingProgramShader *)local_90;
  local_50 = local_88;
  local_90 = (RenderingProgram *)pRVar7;
  local_88 = plVar6;
  if ((plVar5 != (long *)0x0) && (lVar9 = plVar5[1], plVar5[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0058ddb4 with catch @ 0058de14 */
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar9 = plVar5[2];
    plVar5[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* try { // try from 0058de34 to 0068de5b has its CatchHandler @ 0058de64 */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((undefined *)(local_98 + -0x18) != puVar4) {
    piVar10 = (int *)(local_98 + -8);
                    /* try { // try from 0058e488 to 0068e48f has its CatchHandler @ 00592268 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar10;
      *piVar10 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_98 + -0x18));
    }
  }
  pRVar8 = local_90;
                    /* try { // try from 0058de5c to 0068de67 has its CatchHandler @ 0058dd48 */
                    /* catch() { ... } // from try @ 0058de34 with catch @ 0058de64 */
  FUN_00666bb8(&local_58,&DAT_00696b84,auStack_60);
  RenderingProgram::AddVertexAttribute((uint)pRVar8,(string *)0x8074);
  if (local_58 + -0x18 != (RenderingProgramShader *)puVar4) {
    pRVar7 = local_58 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)pRVar7;
                    /* try { // try from 0058e6b0 to 0068e6d7 has its CatchHandler @ 00591610 */
      *(int *)pRVar7 = iVar12 + -1;
    }
    else {
      do {
                    /* try { // try from 0058e4b0 to 0068e4d7 has its CatchHandler @ 00591664 */
        iVar12 = *(int *)pRVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pRVar7,0x10);
        if (bVar2) {
          *(int *)pRVar7 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_58 + -0x18);
    }
  }
  RenderingProgram::LinkWithShaders((shared_ptr *)local_90,(shared_ptr *)&local_70);
  RenderingContext::AddProgram(param_1,0,(shared_ptr *)&local_90);
  pRVar8 = operator_new(0x90);
  FUN_00666bb8(&local_98,0x696b93,auStack_a0);
  RenderingProgram::RenderingProgram(pRVar8,param_1,(string *)&local_98);
  local_58 = (RenderingProgramShader *)pRVar8;
  boost::detail::shared_count::shared_count<Caver::RenderingProgram>
            ((shared_count *)&local_50,pRVar8);
  boost::detail::sp_enable_shared_from_this(&local_58,pRVar8,pRVar8);
  plVar6 = local_50;
  pRVar7 = local_58;
  plVar5 = local_88;
  local_58 = (RenderingProgramShader *)local_90;
  local_50 = local_88;
  local_90 = (RenderingProgram *)pRVar7;
  local_88 = plVar6;
                    /* try { // try from 0058df1c to 0068df9f has its CatchHandler @ 0058df1c
                       catch() { ... } // from try @ 0058df1c with catch @ 0058df1c
                       catch() { ... } // from try @ 00590b7c with catch @ 0058df1c
                       catch() { ... } // from try @ 0059305c with catch @ 0058df1c */
  if ((plVar5 != (long *)0x0) && (lVar9 = plVar5[1], plVar5[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar9 = plVar5[2];
    plVar5[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((undefined *)(local_98 + -0x18) != puVar4) {
    piVar10 = (int *)(local_98 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar10;
      *piVar10 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar10;
                    /* try { // try from 0058e4d8 to 0068e4e7 has its CatchHandler @ 005928b0 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 0058e6d8 to 0068e6e3 has its CatchHandler @ 00592968 */
    if (iVar12 < 1) {
                    /* try { // try from 0058e6e4 to 0068e6eb has its CatchHandler @ 005921dc */
      operator_delete((undefined *)(local_98 + -0x18));
    }
  }
  pRVar8 = local_90;
  FUN_00666bb8(&local_58,&DAT_00696b84,auStack_60);
  RenderingProgram::AddVertexAttribute((uint)pRVar8,(string *)0x8074);
                    /* try { // try from 0058dfa0 to 0068dfab has its CatchHandler @ 00592968 */
                    /* try { // try from 0058dfac to 0068dfb3 has its CatchHandler @ 00592404 */
  if ((shared_ptr *)(local_58 + -0x18) != (shared_ptr *)puVar4) {
    psVar11 = (shared_ptr *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 0058e6ec to 0068e75b has its CatchHandler @ 00592968 */
      iVar12 = *(int *)psVar11;
      *(int *)psVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)psVar11;
                    /* try { // try from 0058e500 to 0068e50b has its CatchHandler @ 00592264 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(psVar11,0x10);
        if (bVar2) {
          *(int *)psVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((shared_ptr *)(local_58 + -0x18));
    }
  }
  pRVar8 = local_90;
                    /* try { // try from 0058dfb4 to 0068e01b has its CatchHandler @ 00592968 */
  local_90[0x14] = (RenderingProgram)0x1;
  FUN_00666bb8(&local_58,"texCoord",auStack_60);
  RenderingProgram::AddVertexAttribute((uint)pRVar8,(string *)0x8078);
  if ((shared_ptr *)(local_58 + -0x18) != (shared_ptr *)puVar4) {
                    /* try { // try from 0058e50c to 0068e517 has its CatchHandler @ 005927c8 */
    psVar11 = (shared_ptr *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)psVar11;
      *(int *)psVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)psVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(psVar11,0x10);
        if (bVar2) {
          *(int *)psVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((shared_ptr *)(local_58 + -0x18));
    }
  }
  RenderingProgram::LinkWithShaders((shared_ptr *)local_90,(shared_ptr *)&local_70);
  RenderingContext::AddProgram(param_1,1,(shared_ptr *)&local_90);
  pRVar8 = operator_new(0x90);
  FUN_00666bb8(&local_98,"PROGRAM_VARYING_COLOR",auStack_a0);
  RenderingProgram::RenderingProgram(pRVar8,param_1,(string *)&local_98);
                    /* try { // try from 0058e044 to 0068e04f has its CatchHandler @ 005923b4 */
  local_58 = (RenderingProgramShader *)pRVar8;
  boost::detail::shared_count::shared_count<Caver::RenderingProgram>
            ((shared_count *)&local_50,pRVar8);
  boost::detail::sp_enable_shared_from_this(&local_58,pRVar8,pRVar8);
  plVar6 = local_50;
  pRVar7 = local_58;
  plVar5 = local_88;
                    /* try { // try from 0058e070 to 0068e097 has its CatchHandler @ 005916bc */
  local_58 = (RenderingProgramShader *)local_90;
  local_50 = local_88;
  local_90 = (RenderingProgram *)pRVar7;
  local_88 = plVar6;
  if ((plVar5 != (long *)0x0) && (lVar9 = plVar5[1], plVar5[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 0058e098 to 0068e0a3 has its CatchHandler @ 00592968 */
                    /* try { // try from 0058e0a4 to 0068e0ab has its CatchHandler @ 005923b0 */
    (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* try { // try from 0058e0ac to 0068e113 has its CatchHandler @ 00592968 */
    lVar9 = plVar5[2];
    plVar5[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((undefined *)(local_98 + -0x18) != puVar4) {
    piVar10 = (int *)(local_98 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar10;
      *piVar10 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_98 + -0x18));
    }
  }
  pRVar8 = local_90;
  FUN_00666bb8(&local_58,&DAT_00696b84,auStack_60);
  RenderingProgram::AddVertexAttribute((uint)pRVar8,(string *)0x8074);
  if ((shared_ptr *)(local_58 + -0x18) != (shared_ptr *)puVar4) {
    psVar11 = (shared_ptr *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)psVar11;
      *(int *)psVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)psVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(psVar11,0x10);
        if (bVar2) {
          *(int *)psVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 0058e75c to 0068e76f has its CatchHandler @ 005921d8 */
    if (iVar12 < 1) {
      operator_delete((shared_ptr *)(local_58 + -0x18));
    }
  }
                    /* try { // try from 0058e118 to 0068e11f has its CatchHandler @ 005923ac */
  pRVar8 = local_90;
                    /* try { // try from 0058e120 to 0068e133 has its CatchHandler @ 005923a8 */
  FUN_00666bb8(&local_58,"vertexColor",auStack_60);
                    /* try { // try from 0058e134 to 0068e147 has its CatchHandler @ 005925a4 */
  RenderingProgram::AddVertexAttribute((uint)pRVar8,(string *)0x8076);
                    /* try { // try from 0058e148 to 0068e157 has its CatchHandler @ 00592378 */
  if ((shared_ptr *)(local_58 + -0x18) != (shared_ptr *)puVar4) {
    psVar11 = (shared_ptr *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)psVar11;
                    /* try { // try from 0058e770 to 0068e77b has its CatchHandler @ 00592790 */
      *(int *)psVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)psVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(psVar11,0x10);
        if (bVar2) {
          *(int *)psVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((shared_ptr *)(local_58 + -0x18));
    }
  }
  RenderingProgram::LinkWithShaders((shared_ptr *)local_90,(shared_ptr *)&local_70);
  RenderingContext::AddProgram(param_1,2,(shared_ptr *)&local_90);
  pRVar8 = operator_new(0x90);
                    /* try { // try from 0058e178 to 0068e17b has its CatchHandler @ 005925a4 */
  FUN_00666bb8(&local_98,"PROGRAM_VARYING_COLOR_TEXTURING",auStack_a0);
  RenderingProgram::RenderingProgram(pRVar8,param_1,(string *)&local_98);
  local_58 = (RenderingProgramShader *)pRVar8;
                    /* try { // try from 0058e1b8 to 0068e1bf has its CatchHandler @ 00592350 */
  boost::detail::shared_count::shared_count<Caver::RenderingProgram>
            ((shared_count *)&local_50,pRVar8);
  boost::detail::sp_enable_shared_from_this(&local_58,pRVar8,pRVar8);
  plVar6 = local_50;
  pRVar7 = local_58;
  plVar5 = local_88;
  local_58 = (RenderingProgramShader *)local_90;
                    /* try { // try from 0058e1d8 to 0068e1df has its CatchHandler @ 005916c0 */
  local_50 = local_88;
  local_90 = (RenderingProgram *)pRVar7;
  local_88 = plVar6;
  if ((plVar5 != (long *)0x0) && (lVar9 = plVar5[1], plVar5[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 0058e208 to 0068e213 has its CatchHandler @ 00592300 */
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar9 = plVar5[2];
    plVar5[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
                    /* try { // try from 0058e234 to 0068e25b has its CatchHandler @ 005916b8 */
  if ((undefined *)(local_98 + -0x18) != puVar4) {
    piVar10 = (int *)(local_98 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar10;
      *piVar10 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_98 + -0x18));
    }
  }
  pRVar8 = local_90;
  FUN_00666bb8(&local_58,&DAT_00696b84,auStack_60);
                    /* try { // try from 0058e25c to 0068e267 has its CatchHandler @ 00592968 */
  RenderingProgram::AddVertexAttribute((uint)pRVar8,(string *)0x8074);
                    /* try { // try from 0058e268 to 0068e26f has its CatchHandler @ 005922fc */
                    /* try { // try from 0058e270 to 0068e2ef has its CatchHandler @ 00592968 */
  if ((shared_ptr *)(local_58 + -0x18) != (shared_ptr *)puVar4) {
    psVar11 = (shared_ptr *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)psVar11;
                    /* try { // try from 0058e7b4 to 0068e7db has its CatchHandler @ 005915c0 */
      *(int *)psVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)psVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(psVar11,0x10);
        if (bVar2) {
          *(int *)psVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((shared_ptr *)(local_58 + -0x18));
    }
  }
  pRVar8 = local_90;
  FUN_00666bb8(&local_58,"vertexColor",auStack_60);
  RenderingProgram::AddVertexAttribute((uint)pRVar8,(string *)0x8076);
  if ((shared_ptr *)(local_58 + -0x18) != (shared_ptr *)puVar4) {
    psVar11 = (shared_ptr *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)psVar11;
      *(int *)psVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)psVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(psVar11,0x10);
        if (bVar2) {
          *(int *)psVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((shared_ptr *)(local_58 + -0x18));
    }
  }
  pRVar8 = local_90;
  local_90[0x14] = (RenderingProgram)0x1;
  FUN_00666bb8(&local_58,"texCoord",auStack_60);
  RenderingProgram::AddVertexAttribute((uint)pRVar8,(string *)0x8078);
  if ((shared_ptr *)(local_58 + -0x18) != (shared_ptr *)puVar4) {
    psVar11 = (shared_ptr *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)psVar11;
      *(int *)psVar11 = iVar12 + -1;
    }
    else {
      do {
                    /* try { // try from 0058e618 to 0068e62b has its CatchHandler @ 00592230 */
        iVar12 = *(int *)psVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(psVar11,0x10);
        if (bVar2) {
          *(int *)psVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 0058e7fc to 0068e823 has its CatchHandler @ 00592790 */
    if (iVar12 < 1) {
      operator_delete((shared_ptr *)(local_58 + -0x18));
    }
  }
                    /* try { // try from 0058e2f0 to 0068e303 has its CatchHandler @ 005922f8 */
  RenderingProgram::LinkWithShaders((shared_ptr *)local_90,(shared_ptr *)&local_70);
                    /* try { // try from 0058e304 to 0068e30f has its CatchHandler @ 00592800 */
  RenderingContext::AddProgram(param_1,3,(shared_ptr *)&local_90);
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) && (lVar9 = local_88[1], local_88[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_88 + 0x10))(local_88);
    lVar9 = plVar5[2];
    plVar5[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* try { // try from 0058e348 to 0068e36f has its CatchHandler @ 00591668 */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = local_78;
  if ((local_78 != (long *)0x0) && (lVar9 = local_78[1], local_78[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_78 + 0x10))(local_78);
    lVar9 = plVar5[2];
    plVar5[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* try { // try from 0058e390 to 0068e3b7 has its CatchHandler @ 00592800 */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = local_68;
  if ((local_68 != (long *)0x0) && (lVar9 = local_68[1], local_68[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar9 = plVar5[2];
    plVar5[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


