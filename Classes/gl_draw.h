/*
 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
 
 See the GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 
 */
/*
 *  gl_draw.h
 *  iPhone Quake
 *
 *  Kevin Arunski, October 2008
 *
 */

#ifndef GL_DRAW_H
#define GL_DRAW_H
void GL_Set2D ();
void GL_Resample8BitTexture (unsigned char *in, int inwidth, int inheight, unsigned char *out,  int outwidth, int outheight);
int GL_LoadPicTexture (qpic_t *pic);
void GL_Upload8_EXT(byte * data, int width, int height, qboolean mipmap, qboolean alpha);
#endif


