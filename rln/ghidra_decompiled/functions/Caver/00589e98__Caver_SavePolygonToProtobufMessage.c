/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00589e98
 * Function: Caver::SavePolygonToProtobufMessage
 * Signature: undefined __cdecl SavePolygonToProtobufMessage(Polygon * param_1, Polygon * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SavePolygonToProtobufMessage(Caver::Polygon const&, Caver::Proto::Polygon*) */

void Caver::SavePolygonToProtobufMessage(Polygon *param_1,Polygon *param_2)

{
  int iVar1;
  Polygon PVar2;
  int iVar3;
  undefined8 uVar4;
  Vector2 *this;
  long lVar5;
  long lVar6;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00589f6c with catch @ 00589eb8
                       catch(type#1 @ 00000000) { ... } // from try @ 00589fdc with catch @ 00589eb8
                        */
  if (0 < *(int *)param_1) {
    lVar5 = 0;
    do {
      iVar1 = *(int *)(param_2 + 0x18);
      iVar3 = *(int *)(param_2 + 0x1c);
      lVar6 = *(long *)(param_1 + 8);
      if (iVar1 < iVar3) {
        *(int *)(param_2 + 0x18) = iVar1 + 1;
        this = *(Vector2 **)(*(long *)(param_2 + 0x10) + (long)iVar1 * 8);
      }
      else {
        if (iVar3 == *(int *)(param_2 + 0x20)) {
                    /* try { // try from 00589efc to 00689f23 has its CatchHandler @ 00589f88 */
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_2 + 0x10),iVar3 + 1);
          iVar3 = *(int *)(param_2 + 0x1c);
        }
        *(int *)(param_2 + 0x1c) = iVar3 + 1;
        this = operator_new(0x18);
        Proto::Vector2::Vector2(this);
        iVar1 = *(int *)(param_2 + 0x18);
        *(int *)(param_2 + 0x18) = iVar1 + 1;
        *(Vector2 **)(*(long *)(param_2 + 0x10) + (long)iVar1 * 8) = this;
      }
      uVar4 = *(undefined8 *)(lVar6 + lVar5 * 8);
      lVar5 = lVar5 + 1;
                    /* try { // try from 00589f44 to 00689f6b has its CatchHandler @ 00589f80 */
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 3;
      *(undefined8 *)(this + 0xc) = uVar4;
    } while (lVar5 < *(int *)param_1);
  }
  *(Polygon *)(param_2 + 0x48) = param_1[0x20];
  PVar2 = param_1[0x21];
                    /* try { // try from 00589f6c to 00689fab has its CatchHandler @ 00589eb8 */
  *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x4c) | 6;
  *(Polygon *)(param_2 + 0x49) = PVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00589f44 with catch @ 00589f80
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00589efc with catch @ 00589f88
                        */
  return;
}


