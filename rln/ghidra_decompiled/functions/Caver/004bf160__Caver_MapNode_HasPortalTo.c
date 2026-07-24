/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bf160
 * Function: Caver::MapNode::HasPortalTo
 * Signature: undefined __thiscall HasPortalTo(MapNode * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapNode::HasPortalTo(std::string const&) */

undefined8 __thiscall Caver::MapNode::HasPortalTo(MapNode *this,string *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *__s2;
  size_t __n;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x30);
  puVar1 = *(undefined8 **)(this + 0x38);
  if (puVar3 != puVar1) {
    __s2 = *(void **)param_1;
    __n = *(size_t *)((long)__s2 + -0x18);
    do {
      if ((*(size_t *)((long)*puVar3 + -0x18) == __n) &&
         (iVar2 = memcmp((void *)*puVar3,__s2,__n), iVar2 == 0)) {
        return 1;
      }
      puVar3 = puVar3 + 3;
    } while (puVar1 != puVar3);
  }
                    /* try { // try from 004bf1b0 to 005bf1c3 has its CatchHandler @ 004bf7d8 */
  return 0;
}


