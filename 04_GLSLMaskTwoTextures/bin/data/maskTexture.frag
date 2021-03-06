#version 120

//these are our texture names, set in openFrameworks on the shader object after begin()
uniform sampler2DRect image;
uniform sampler2DRect mask;

void main()
{
	//sample both textures to get colors, vec4 is a color a r g b
	vec4 colorSample = texture2DRect(image, gl_TexCoord[0].st);
	vec4 alphaSample = texture2DRect(mask, gl_TexCoord[0].st);
	
	//use the color from the image,
	//and use the r channel of the mask as the alpha channel of our output
	gl_FragColor = vec4(colorSample.rgb, alphaSample.r);
	
}
