<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function mollycrealock_imagestyles_imagecache_default_presets() {
  $items = array(

  'lightbox' => array(
      'presetname' => 'lightbox',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '800',
            'height' => '600',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    
    'node_rounded' => array(
      'presetname' => 'node_rounded',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '760',
            'height' => '550',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_roundedcorners',
          'data' => array(
            'radius' => '12',
            'independent_corners_set' => array(
              'independent_corners' => 0,
              'radii' => array(
                'tl' => '',
                'tr' => '',
                'bl' => '',
                'br' => '',
              ),
            ),
            'antialias' => TRUE,
          ),
        ),
        '2' => array(
          'weight' => '0',
          'module' => 'imagecache_coloractions',
          'action' => 'imagecache_convert',
          'data' => array(
            'format' => 'image/png',
          ),
        ),
      ),
    ),
    
    'thumb_circle' => array(
      'presetname' => 'thumb_circle',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '300',
            'height' => '300',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '-9',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '40',
            'height' => '40',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
        '2' => array(
          'weight' => '-8',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_roundedcorners',
          'data' => array(
            'radius' => '20',
            'independent_corners_set' => array(
              'independent_corners' => 0,
              'radii' => array(
                'tl' => '',
                'tr' => '',
                'bl' => '',
                'br' => '',
              ),
            ),
            'antialias' => TRUE,
          ),
        ),
        '3' => array(
          'weight' => '-7',
          'module' => 'imagecache_coloractions',
          'action' => 'imagecache_convert',
          'data' => array(
            'format' => 'image/png',
          ),
        ),
      ),
    ),
    
    'thumb_circle_sm' => array(
       'presetname' => 'thumb_circle_sm',
       'actions' => 
       array(
         0 => array(
           'weight' => '-10',
           'module' => 'imagecache',
           'action' => 'imagecache_scale_and_crop',
           'data' => 
           array(
             'width' => '36',
             'height' => '36',
           ),
         ),
         1 => array(
           'weight' => '-9',
           'module' => 'imagecache_canvasactions',
           'action' => 'canvasactions_roundedcorners',
           'data' => 
           array(
             'radius' => '18',
             'independent_corners_set' => array(
               'independent_corners' => 0,
               'radii' => array(
                 'tl' => '',
                 'tr' => '',
                 'bl' => '',
                 'br' => '',
               ),
             ),
             'antialias' => true,
           ),
         ),
         2 => array(
           'weight' => '-8',
           'module' => 'imagecache_coloractions',
           'action' => 'imagecache_convert',
           'data' => 
           array(
             'format' => 'image/png',
           ),
         ),
       ),
     ),

     'thumb_circle_med' => array(
       'presetname' => 'thumb_circle_med',
       'actions' => 
       array(
         0 => array(
           'weight' => '-10',
           'module' => 'imagecache',
           'action' => 'imagecache_scale_and_crop',
           'data' => array(
             'width' => '46',
             'height' => '46',
           ),
         ),
         1 => array(
           'weight' => '-7',
           'module' => 'imagecache_canvasactions',
           'action' => 'canvasactions_roundedcorners',
           'data' => 
           array(
             'radius' => '23',
             'independent_corners_set' => 
             array(
               'independent_corners' => 0,
               'radii' =>  array(
                 'tl' => '',
                 'tr' => '',
                 'bl' => '',
                 'br' => '',
               ),
             ),
             'antialias' => true,
           ),
         ),
         2 => array(
           'weight' => '-6',
           'module' => 'imagecache_coloractions',
           'action' => 'imagecache_convert',
           'data' => 
           array(
             'format' => 'image/png',
           ),
         ),
       ),
     ),
     
     'thumb_circle_lg' => array(
       'presetname' => 'thumb_circle_lg',
       'actions' => array(
         0 => array(
           'weight' => '-10',
           'module' => 'imagecache',
           'action' => 'imagecache_scale_and_crop',
           'data' => array(
             'width' => '56',
             'height' => '56',
           ),
         ),
         1 =>  array(
           'weight' => '-9',
           'module' => 'imagecache_canvasactions',
           'action' => 'canvasactions_roundedcorners',
           'data' => array(
             'radius' => '28',
             'independent_corners_set' => array(
               'independent_corners' => 0,
               'radii' =>  array(
                 'tl' => '',
                 'tr' => '',
                 'bl' => '',
                 'br' => '',
               ),
             ),
             'antialias' => true,
           ),
         ),
         2 => array(
           'weight' => '-8',
           'module' => 'imagecache_coloractions',
           'action' => 'imagecache_convert',
           'data' => array(
             'format' => 'image/png',
           ),
         ),
       ),
     ),
     
    'thumb_gallery' => array(
      'presetname' => 'thumb_gallery',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '135',
            'height' => '135',
          ),
        ),
      ),
    ),
  );
  return $items;
}
