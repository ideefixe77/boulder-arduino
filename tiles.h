#define TILE_SIZE       8
#define BITMAP_MAX      14  /* Number of bitmaps to load */

const PROGMEM uint8_t Tiles[BITMAP_MAX][TILE_SIZE] = {
{0, 0, 0, 0, 0, 0, 0, 0}, /* TUNNEL */
{110, 110, 112, 112, 110, 110, 112, 112, }, /* WALL */
{0, 0, 0, 0, 0, 0, 0, 0}, /* HERO RIGHT */
{0, 0, 0, 0, 0, 0, 0, 0}, /* HERO LEFT */
{0, 0, 0, 0, 0, 0, 0, 0}, /* HERO FACE 1 */
{0, 0, 0, 0, 0, 0, 0, 0}, /* HERO FACE 2 */
{0, 0, 0, 0, 0, 0, 0, 0}, /* ROCK */
{0, 0, 0, 0, 0, 0, 0, 0}, /* DIAMOND */
{0, 0, 0, 0, 0, 0, 0, 0}, /* GROUND */
{0, 0, 0, 0, 0, 0, 0, 0}, /* METAL */
{0, 0, 0, 0, 0, 0, 0, 0}, /* DOOR */
{255, 129, 189, 165, 165, 189, 129, 255}, /* BOX */
{0, 0, 0, 0, 0, 0, 0, 0}, /* CRASH */
{0, 0, 0, 0, 0, 0, 0, 0}}; /* FLY */
