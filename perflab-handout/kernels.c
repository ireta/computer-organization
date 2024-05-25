/********************************************************
 * Kernels to be optimized for the CS:APP Performance Lab
 ********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "defs.h"
/*
 * Please fill in the following team_t struct
 */
team_t team = {
        "IREM",    /* Team Name */

        "e2380632",      /* First student ID */
        "IREM SEZGI KILICDOGAN",       /* First student name */

        "",             /* Second student ID */
        "",           /* Second student name */

        "",             /* Third student ID */
        ""            /* Third student Name */
};


/********************
 * CONVOLUTION KERNEL
 ********************/

/***************************************************************
 * Your different versions of the convolution functions  go here
 ***************************************************************/

/*
 * naive_conv - The naive baseline version of convolution
 */
char naive_conv_descr[] = "naive_conv: Naive baseline implementation";
void naive_conv(int dim, pixel *src, pixel *ker, unsigned *dst) {
    int i,j, idim, lim, idimj, kdim, last, k8, k8t;
    long unsigned s;
    idim = 0;
    kdim = 0;
	lim = dim - 7;
    for(i = 0; i < lim; i++){
        for(j = 0; j < lim; j++) {
        	idimj = idim + j;
            kdim = 0;
            k8 = 0;
            s = 0;
            
        	k8t = k8;
        	last = idimj + kdim;
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last].blue * ker[k8t].blue;
            
            kdim += dim;
            k8 += 8;
        	
        	k8t = k8;
        	last = idimj + kdim;
        	
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last].blue * ker[k8t].blue;
            
            kdim += dim;
            k8 += 8;
            
        	k8t = k8;
        	last = idimj + kdim;
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last].blue * ker[k8t].blue;
            
            kdim += dim;
            k8 += 8;
        	
        	k8t = k8;
        	last = idimj + kdim;
        	
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last].blue * ker[k8t].blue;
            
            kdim += dim;
            k8 += 8;
        
        	k8t = k8;
        	last = idimj + kdim;
        	
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last].blue * ker[k8t].blue;
            
            kdim += dim;
            k8 += 8;
        	
        	k8t = k8;
        	last = idimj + kdim;
        	
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last].blue * ker[k8t].blue;
            
            kdim += dim;
            k8 += 8;
        
            k8t = k8;
        	last = idimj + kdim;
        	
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last].blue * ker[k8t].blue;
            
            kdim += dim;
            k8 += 8;
            
            k8t = k8;
        	last = idimj + kdim;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last++].blue * ker[k8t++].blue;
            
            s += src[last].red * ker[k8t].red;
            s += src[last].green * ker[k8t].green;
            s += src[last].blue * ker[k8t].blue;
            
            
            kdim += dim;
            k8 += 8;
			
			dst[idimj] = s;
        }
        idim += dim;
	}
}

/*
 * convolution - Your current working version of convolution
 * IMPORTANT: This is the version you will be graded on
 */
char convolution_descr[] = "Convolution: Current working version";
void convolution(int dim, pixel *src, pixel *ker, unsigned *dst)
{

    naive_conv(dim,src,ker,dst);

}

/*********************************************************************
 * register_conv_functions - Register all of your different versions
 *     of the convolution functions  with the driver by calling the
 *     add_conv_function() for each test function. When you run the
 *     driver program, it will test and report the performance of each
 *     registered test function.
 *********************************************************************/

void register_conv_functions() {
    add_conv_function(&naive_conv, naive_conv_descr);
    add_conv_function(&convolution, convolution_descr);
    /* ... Register additional test functions here */
}




/************************
 * AVERAGE POOLING KERNEL
 ************************/

/*********************************************************
 * Your different versions of the average pooling  go here
 *********************************************************/

/*
 * naive_average_pooling - The naive baseline version of average pooling
 */
char naive_average_pooling_descr[] = "Naive Average Pooling: Naive baseline implementation";
void naive_average_pooling(int dim, pixel *src, pixel *dst) {
    int i,j, lim, idim, idimj, idim2, dim2, first;
    long unsigned s1, s2, s3;
    lim = dim/2;
    dim2 = dim*2;
	idim = 0;
	idim2 = 0;
    for(i = 0; i < lim; i++){
        for(j = 0; j < lim; j+=4) {
        
    		idimj = idim + j;
			first = idim2 + 2*j;
			
		    s1 = src[first].red;
		    s1 += src[first+1].red;
		    s1 += src[first+dim].red;
		    s1 += src[first+dim+1].red;
		    
		    s2 = src[first].green;
		    s2 += src[first+1].green;
		    s2 += src[first+dim].green;
		    s2 += src[first+dim+1].green;
		    
		    s3 = src[first].blue;
		    s3 += src[first+1].blue;
		    s3 += src[first+dim].blue;
		    s3 += src[first+dim+1].blue;
		    
		    dst[idimj].red = s1/4;
		    dst[idimj].green = s2/4;
		    dst[idimj++].blue = s3/4;
		    
		    
		    
			first += 2;
			
		    s1 = src[first].red;
		    s1 += src[first+1].red;
		    s1 += src[first+dim].red;
		    s1 += src[first+dim+1].red;
		    
		    s2 = src[first].green;
		    s2 += src[first+1].green;
		    s2 += src[first+dim].green;
		    s2 += src[first+dim+1].green;
		    
		    s3 = src[first].blue;
		    s3 += src[first+1].blue;
		    s3 += src[first+dim].blue;
		    s3 += src[first+dim+1].blue;
		    
		    dst[idimj].red = s1/4;
		    dst[idimj].green = s2/4;
		    dst[idimj++].blue = s3/4;
			    
			 
			 
			first += 2;
			
		    s1 = src[first].red;
		    s1 += src[first+1].red;
		    s1 += src[first+dim].red;
		    s1 += src[first+dim+1].red;
		    
		    s2 = src[first].green;
		    s2 += src[first+1].green;
		    s2 += src[first+dim].green;
		    s2 += src[first+dim+1].green;
		    
		    s3 = src[first].blue;
		    s3 += src[first+1].blue;
		    s3 += src[first+dim].blue;
		    s3 += src[first+dim+1].blue;
		    
		    dst[idimj].red = s1/4;
		    dst[idimj].green = s2/4;
		    dst[idimj++].blue = s3/4;
		    
		    
		    
			first += 2;
			
		    s1 = src[first].red;
		    s1 += src[first+1].red;
		    s1 += src[first+dim].red;
		    s1 += src[first+dim+1].red;
		    
		    s2 = src[first].green;
		    s2 += src[first+1].green;
		    s2 += src[first+dim].green;
		    s2 += src[first+dim+1].green;
		    
		    s3 = src[first].blue;
		    s3 += src[first+1].blue;
		    s3 += src[first+dim].blue;
		    s3 += src[first+dim+1].blue;
		    
		    dst[idimj].red = s1/4;
		    dst[idimj].green = s2/4;
		    dst[idimj].blue = s3/4;
        }
        idim += lim;
        idim2 += dim2;
	}
}


/*
 * average_pooling - Your current working version of average_pooling
 * IMPORTANT: This is the version you will be graded on
 */
char average_pooling_descr[] = "Average Pooling: Current working version";
void average_pooling(int dim, pixel *src, pixel *dst)
{

    naive_average_pooling(dim,src,dst);

}

/******************************************************************************
 * register_average_pooling_functions - Register all of your different versions
 *     of the average pooling  with the driver by calling the
 *     add_average_pooling_function() for each test function. When you run the
 *     driver program, it will test and report the performance of each
 *     registered test function.  
 ******************************************************************************/

void register_average_pooling_functions() {
    add_average_pooling_function(&naive_average_pooling, naive_average_pooling_descr);
    add_average_pooling_function(&average_pooling, average_pooling_descr);
    /* ... Register additional test functions here */
}

