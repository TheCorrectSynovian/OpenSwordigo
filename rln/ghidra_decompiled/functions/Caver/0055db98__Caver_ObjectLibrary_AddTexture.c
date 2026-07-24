/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055db98
 * Function: Caver::ObjectLibrary::AddTexture
 * Signature: undefined __thiscall AddTexture(ObjectLibrary * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::AddTexture(boost::intrusive_ptr<Caver::Texture> const&) */

void __thiscall Caver::ObjectLibrary::AddTexture(ObjectLibrary *this,intrusive_ptr *param_1)

{
  size_t __n;
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  void *__s2;
  ulong __n_00;
  void *__s1;
  ulong uVar6;
  
                    /* catch() { ... } // from try @ 0055d968 with catch @ 0055dbbc */
                    /* catch() { ... } // from try @ 0055da00 with catch @ 0055dbc0 */
  plVar5 = *(long **)(this + 0x50);
  plVar4 = *(long **)(this + 0x58);
  if (plVar4 != plVar5) {
    lVar3 = *(long *)param_1;
    __s2 = *(void **)(lVar3 + 0x30);
    __n_00 = *(ulong *)((long)__s2 + -0x18);
    do {
      __s1 = *(void **)(*plVar5 + 0x30);
      uVar6 = *(ulong *)((long)__s1 + -0x18);
      lVar1 = uVar6 - __n_00;
      __n = __n_00;
      if (uVar6 < __n_00 || lVar1 == 0) {
        __n = uVar6;
      }
      iVar2 = memcmp(__s1,__s2,__n);
      if (iVar2 == 0) {
        if (lVar1 < 0x80000000) {
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
          goto LAB_0055dc24;
        }
LAB_0055dc7c:
        if ((plVar4 != plVar5) || (plVar4 == *(long **)(this + 0x60))) goto LAB_0055dce4;
        *plVar4 = lVar3;
        if (lVar3 != 0) {
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        }
        goto LAB_0055dca8;
      }
LAB_0055dc24:
                    /* try { // try from 0055dc24 to 0065dc4f has its CatchHandler @ 0055dc24
                       catch() { ... } // from try @ 0055dc24 with catch @ 0055dc24
                       catch() { ... } // from try @ 0055dc74 with catch @ 0055dc24
                       catch() { ... } // from try @ 0055dd94 with catch @ 0055dc24
                       catch() { ... } // from try @ 0055def8 with catch @ 0055dc24 */
      if (0 < iVar2) goto LAB_0055dc7c;
      if ((uVar6 == __n_00) && (iVar2 = memcmp(__s1,__s2,__n_00), iVar2 == 0)) {
        return;
      }
      plVar5 = plVar5 + 1;
                    /* try { // try from 0055dc50 to 0065dc63 has its CatchHandler @ 0055dfcc */
    } while (plVar4 != plVar5);
  }
  plVar5 = plVar4;
  if (plVar4 == *(long **)(this + 0x60)) {
LAB_0055dce4:
                    /* try { // try from 0055dce8 to 0065dd0f has its CatchHandler @ 0055deac */
    std::
    vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>
    ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>
                     *)(this + 0x50),plVar5,param_1);
    return;
  }
  lVar3 = *(long *)param_1;
  *plVar4 = lVar3;
                    /* try { // try from 0055dc68 to 0065dc73 has its CatchHandler @ 0055df5c */
  if (lVar3 != 0) {
                    /* try { // try from 0055dc74 to 0065dcbf has its CatchHandler @ 0055dc24 */
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
LAB_0055dca8:
  *(long **)(this + 0x58) = plVar4 + 1;
                    /* try { // try from 0055dcc0 to 0065dccb has its CatchHandler @ 0055deb0 */
  return;
}


