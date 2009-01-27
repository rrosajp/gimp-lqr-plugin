/* GIMP LiquidRescaling Plug-in
 * Copyright (C) 2007 Carlo Baldassi (the "Author") <carlobaldassi@yahoo.it>.
 * All Rights Reserved.
 *
 * This plugin implements the algorithm described in the paper
 * "Seam Carving for Content-Aware Image Resizing"
 * by Shai Avidan and Ariel Shamir
 * which can be found at http://www.faculty.idc.ac.il/arik/imret.pdf
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the Licence, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org.licences/>.
 */


#ifndef __INTERFACE_I_H__
#define __INTERFACE_I_H__

/* Data structs for callbacks */

typedef struct
{
	GtkWidget * coordinates;
        //GtkWidget * info_frame;
        GtkWidget * info_label;
        gint32 image_ID;
        GimpDrawable * drawable;
        PlugInDrawableVals * drawable_vals;
        CarverData * carver_data;
        gint orig_width;
        gint orig_height;
} InterfaceIData;

#define INTERFACE_I_DATA(data) ((InterfaceIData*) data)

/*  Public functions  */

gint
dialog_I (gint32 image_ID, gint32 layer_ID,
	GimpDrawable * drawable,
	PlugInVals * vals,
	PlugInImageVals * image_vals,
	PlugInDrawableVals * drawable_vals, PlugInUIVals * ui_vals,
     	PlugInDialogVals * dialog_vals);

#endif /* __INTERFACE_I_H__ */
