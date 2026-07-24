/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bf24c
 * Function: Caver::MapNode::ExperienceLevel
 * Signature: undefined __thiscall ExperienceLevel(MapNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapNode::ExperienceLevel() const */

int __thiscall Caver::MapNode::ExperienceLevel(MapNode *this)

{
  if (*(int *)(this + 0x58) != 0) {
    return *(int *)(this + 0x58);
  }
  if (*(long *)(this + 0x28) != 0) {
                    /* try { // try from 004bf264 to 005bf277 has its CatchHandler @ 004bf740 */
    return *(int *)(*(long *)(this + 0x28) + 0x28);
  }
  return 0;
}


